
var http = require('http');
var port = 8888;


var server = http.createServer();

server.on('request', function(req,res){
	res.write("hello http-server");
	res.end();
});

server.listen(port, function(){
	console.log("http-server started from " + port);
});
