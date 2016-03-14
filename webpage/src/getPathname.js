var http = require("http");
var url = require("url");

var server = http.createServer( onRequest );
server.listen(8881);


function onRequest(req, res){
	var pathname = url.parse(req.url).pathname;
	console.log("Request for" + pathname + " received.");
}
