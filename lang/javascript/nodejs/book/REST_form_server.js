var http = require('http');
var item = [];
var port=8086;
var server = http.createServer(function(req,res){
	if('/'==req.url){
		switch (req.method){
			case 'GET':
				show(res);
				break;
			case 'POST':
				add(req,res);
				break;
			default:
				badRequest(res);
		}
	} else {
		notFound(res);
	}		
				
});


function show(res){
	var html = '<html><head><title>Todo List</title></head><body>'
	  		+ '<h1>Todo List</h1>'
			+ '<ul>'
			+ items.map(function(item){
				return '<li>' + item + '</li>'
			}).join('')
			+ '</ul>'
			+ '<form method="post" action="/">'
			+ '<p><input type="text" name="item" /></p>'
			+ '<p><input type="submit" value="Add Item" /></p>'
			+ '</form></body></html>';
	res.setHeader('Content-Type', 'text/html');
	res.setHeader('Content-Length', Buffer.byteLength(html));
	res.end(html);
}

function add(req,res){
	var body = '';
	req.setEncoding('utf8');
	req.on('data',function(chunk){ item+=chunk});
	res.on('end', function(){
		var obj = qs.parse(body);
		items.push(obj.item);
		show(res);
	});
}


function notFound(res){
	res.statusCode = 404;
	res.setHeader('Content-Type', 'text/plane');
	res.end('Not Found');
}

function badRequest(){		
	res.statusCode = 400;
	res.setHeader('Content-Type', 'text/plane');
	res.end('Bad Request');
}

server.listen(port,function(){
	console.log("REST_form_server started on port:"+port);	
})
