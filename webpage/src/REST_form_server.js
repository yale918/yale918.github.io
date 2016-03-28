var http = require("http");

var items = [];
var port = 8087;

var server = http.createServer(function(req,res){
	if (req.url == "/"){
		switch (req.method){
			case 'POST':
			  add(req,res);
			  break;
			case 'GET':
			  show(res);
			  break;
			default:
			  badRequest(res);
		}
	}


});

function add(req,res){
  	var qs = require('querystring');
	var body = '';
	req.on('data', function(chunk){ body+=chunk; });
	req.on('end', function(){ 
	  var obj = qs.parse(body);
	  items.push(obj.item);
	  show(res);
	});
}
function show(res){
	var html = '<html><head><title>Todo List</title></head><body>'
	  +' <h1>Todo List</h1><ul>'
	  +items.map(function(item){
	  	return '<li>' + item + '</li>'
	  }).join('')
	  +'</ul>'
	  +'<form method="post" action="/">'
	  +'<p><input type="text" name="item" /></p>'
	  +'<p><input type="submit" value="Add Item" /></p>'
	  +'</form></body></html>';
	  res.setHeader('Content-Type', 'text/html');
	  res.setHeader('Content-Length', Buffer.byteLength(html));
	  res.end(html);
}
function badRequest(res){
	res.statusCode = 400;
	res.setHeader = { 'Content-Type' : 'Text-Plain' };
	res.end("badRequest!!");
}
function notFound(res){
	res.statusCode = 404;
	res.setHeader = { 'Content-Type' : 'Text-Plain' };
	res.end("request not found!!");
}

server.listen(port,function(){
	console.log("formServer started on port: "+port);
});
