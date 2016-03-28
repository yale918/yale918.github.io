//uploadServe
var formidable = require('formidable'),
	http = require('http'),
	fs = require('fs-extra'),
	app = require('express'),
	util = require('util');


var items = [];
var port = 8080;

var server = http.createServer(function(req,res){
	switch(req.method){
		case 'POST':
		  upload(req,res);
		  break;
		case 'GET':
		  show(req,res);
		  break;
	}
});


function show(req,res){
	var html = ''
	  + '<form method="post" action="/" enctype="multipart/form-data">'
	  + '<p><input type="text" name="filename"/></p>'
	  + '<p><input type="file" name="file"/></p>' 
	  + '<p><input type="submit" value="upload"/></p>'
	  +'</form>';
	res.setHeader('Content-Type','text/html');
	res.setHeader('Content-Length', Buffer.byteLength(html));
	res.end(html);
}


function upload(req,res){
	if(!isFormData(req)){
		res.statusCode = 400;
		res.end("Bad Request, please input multipart/form-data");
		return;
	}
	
	var form = new formidable.IncomingForm();
	
	form.on('field', function(field, value){
		console.log("field= "+ field);
		console.log("fieldvalue= "+value);
	});
	
	form.on('file', function(name,file){
		console.log("filename= "+ name);
		console.log("file= "+ file);
	});
	
	form.on('end',function(fileds, files){
		res.end('upload completed!!');
		
		
		var file_name = this.openedFiles[0].name;
		var temp_path = this.openedFiles[0].path;
		console.log(file_name);
		var new_location = "/home/yale918/Downloads/uploadServer/";
		fs.copy(temp_path, new_location + file_name,function(err){
			if (err) { console.err(err); }
			else { console.log("success!"); }
		});
	});
	
	form.on('progress', function(bytesReceived, bytesExpected){
		var percent = Math.floor(bytesReceived / bytesExpected * 100);
		console.log(percent);
	})
	//form.uploadDir = "/home/yale918/Downloads/uploadServer";

	form.parse(req,function(error,fields,files){
		console.log(util.inspect({fields:fields, files:files}));
	});
}
function isFormData(req){
	var type = req.headers['content-type'] || '';
	return 0 == type.indexOf('multipart/form-data');
}

server.listen(port,function(){
	console.log("uploadServer started on port: "+port);
});
