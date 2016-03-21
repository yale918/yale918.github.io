//REST_server.js
var http = require("http");
var url = require("url");
var items = [];
var port = 8084;
var server = http.createServer(function(req,res){
	var way = req.method;
	var item=''
	switch(way){
	  case 'POST':
	  	req.setEncoding("utf-8");
		req.on('data',function(chunk){
			item += chunk;
		});
		req.on('end',function(){
			console.log("received:"+item);
			items.push(item);
			//res.end(item);
			res.end("OK!\n");
		})
	  	break;
	  
	  case 'GET':
		items.forEach(function(item, i){
			res.write(i + ') ' + item + '\n');
		});
		res.end();
		break;
	  
	  case 'DELETE':
		var path = url.parse(req.url).pathname;
		var i = parseInt(path.slice(1),10);

		if (isNaN(i)){
			res.statusCode = 400;
			res.end('Invalid item id');
		} else if (!items[i]){
			res.statusCode = 404;
			res.end('Item not found');
		} else{
			items.splice(i, 1);
			res.end('OK!\n');
		}
		break;
	}

		//break;
	  //"delete":
	  //"put":

});




server.listen(port,function(){
	console.log("REST_server started on port:"+port);
})

