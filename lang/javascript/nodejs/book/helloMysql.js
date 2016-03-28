var mysql      = require('mysql');
var connection = mysql.createConnection({  
	host:'127.0.0.1',
	user:'root',
	password: 'yeah31212',
	database : 'my_db'
});

connection.connect();
/*
connection.connect(function(err, conn){
	if(err) {
		console.log('MySQL connection error: ', err);
		process.exit(1);
	}
});
*/
connection.query('SELECT 1 + 1 AS solution', function(err, rows, fields) {
    if (err) throw err;

	  console.log('The solution is: ', rows[0].solution);
});

connection.end();
