
var port = 8083;
var http = require("http");
var server = http.createServer(function(req,res){
	req.setEncoding('utf-8');
	req.on('data', function(chunk){
		console.log('parsed',chunk);
	});
	req.on('end',function(){
		console.log('done parsing');
		res.end();
	});
});

server.listen(port,function(){
	console.log("chunkServer started on port:" + port);
});
