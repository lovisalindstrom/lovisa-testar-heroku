var mysql = require('mysql');
var connection = mysql.createConnection({
	host: 'mysql.dsv.su.se',
	user: 'baad0574',
	password: 'feijeicoo8Eh',
	database: baad0574
});

connection.connect(function(err){
	if(err){
		console.error('error connecting: ' + err.stack);
		return;
	}
	
	console.log('connected ad id ' + connection.threadID);
}); 

