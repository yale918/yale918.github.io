var http =  require('http');
var fs = require('fs');

var port = 8000 ;
var ip = "127.0.0.1" ;

	
//console.log("server started in 127.0.0.1:8888");

/*
var server = http.createServer(function(){
	//console.log("hello1");								
});
server.listen(port, function(){
	console.log("please!!!");
});
*/

var server = http.createServer();

server.on('request', function(req,res){
	res.end("hello world");
})

server.listen(port, function(){console.log("hello server"); });


/*


var server=http.createServer(function(respond, request){	
	res.writeHead(200, {'Content-Type':'text/pnain'});		
	res.end('Hello World\n');
	});
	
	//getTitles(res);

server.listen(port, function(){
	console.log("hello server!!");			
});



function getTitles(res){
	fs.readFile('./titles.json', function (err, data){
		if (err) return hadError(err, res)
		getTemplate(JSON.parse(data.toSrting()), res)
	})
}

function getTemplate(titles, res) {
	fs.readFile('./template.html', function(err, data){
		if (err) return hadError (err, res)
		formatHtml (titles, data.toString(), res)
	})
}

function formatHtml (titles, tmpl, res) {
	var html = tmpl.replace('%', titles.join('<li></li>'));
	res.writeHead(200, {'Content-Type':'text/html'});
	res.end(html);
}

function hadError(err, res){
	console.error(err)
	res.end('Server Error')
}
 
*/
