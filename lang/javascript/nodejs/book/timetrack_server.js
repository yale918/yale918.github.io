var http = require('http');
var work = require('./timetrack');
var mysql = require('mysql');

var db = mysql.createConnection({
	host:	'localhost',
	user:	'root',
	password:	'yeah31212',
	database: 'timetrack'
});

/*
db.connect(function(err, conn){
	if(err){
		console.log('MySQL connection error:', err);
		process.exit(1);
	}
});
*/


var server = http.createServer(function(req, res){
	switch (req.method){
		case 'POST':
		  switch(req.url){
		  	case '/':
			  work.add(db, req, res);
			  break;
			case '/archive':
			  work.archive(db, req, res);
			  break;
			case '/delete':
			  work.delete(db, req, res);
			  break;
		  }
		  break;
		case 'GET':
		  switch(req.url){
		  	case '/':
			  work.show(db, res);
			  break;
		  	case '/archived':
			  work.showArchived(db, res);
			  break;
		  }
		breal;
	}
		
});

db.query(
	"CREATE TABLE IF NOT EXISTS work("
	+ "id INT(10) NOT NULL AUTO_INCREMENT, "
	+ "hours DECIMAL(5,2) DEFAULT 0,"
	+ "date DATE, "
	+ "archived INT(1) DEFAULT 0, "
	+ "description LONGTEXT,"
	+ "PRIMARY KEY(id)",
	function(err){
		if(err) throw err;
		console.log('Server started...');
		server.listen(3000, '127.0.0.1');
	}	
);


