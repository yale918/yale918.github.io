//static_httpServer.js
var http = require("http");
var fs = require("fs");
var url = require("url")

var port = 8880;
var server = http.createServer();

server.on("request", function(req,res){
	var pathname = url.parse(req.url).pathname;
	if(pathname=="/"){ writeFile("./index.html",res); }
	else if(pathname=="/page"){ writeFile("./page/p1.html",res)}
	else if(pathname=="/download"){writeFile("./page/download.html",res)}

});


function writeFile(filename,res){
	fs.readFile(filename,function(err, data){
		console.log("client requested url:" + filename);
		if (err) throw err;
		res.writeHead(200, {"Content-Type":"text/html"});
		res.end(data);
		//console.log(data.toString());
	 

});


}

server.listen(port, function(){
    console.log("[*]server started on port: "+port);
});

