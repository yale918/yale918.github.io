//Call back / pass parameter 
var fs = require('fs');
var pathToFile = process.argv[2];


function counter(callback){
	fs.readFile(pathToFile, function(err, data){
		bufferString = data.toString();
		bufferStringSplit = bufferString.split('\n');
		callback();
	});
}

function logMyNumber(){
	console.log(bufferStringSplit.length-1);
}

counter(logMyNumber);


