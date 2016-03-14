//eventEmitter.js
var port = 8082;

var net = require('net');
var events = require('events');


var channel =new events.EventEmitter();
channel.clients = {};
channel.subscriptions = {};



var server = net.createServer(function(client){
	id = client.remoteAddress+":"+client.remotePort;
	console.log("connection ID= "+id);

	channel.emit('join' ,id ,client);
	
	client.on('data',function(data){
		data = data.toString();
		console.log(id+":"+data);
		channel.emit('broadcast',id ,data);
	});
});


channel.on('join', function(id, client){
	this.clients[id] = client;
	this.subscriptions[id] = function(senderID, message){
		if(id != senderID){
			this.clients[id].write(message);
		}	
	}
	this.on('broadcast',this.subscriptions[id])
});

server.listen(port,function(){
	console.log("[*]eventEmitter_server started on port: "+port);
})
