//staticFile_server
//
var http = require('http');
var parse = require('url').parse;
var join = require('path').join;
var fs = require('fs');

var port = 8085;
var root = __dirname;

var server = http.createServer(function(req,res){
	var url = parse(req.url);
	var path = join(root, url.pathname);
	var stream = fs.createReadStream(path);
	
	stream.on('data', function(chunk){
		res.write(chunk);
		//console.log("chunking");
	});
	stream.on('end',function(){
		res.end();
	});
	
});

server.listen(port,function(){
	console.log("staticFile_server start on port:"+port);
});
