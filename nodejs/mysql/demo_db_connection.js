var mysql = require('mysql');

var con = mysql.createConnection({
  host: "localhost",
  user: "wachirawit.kae",
  password: "@Ribbonz007"
});

con.connect(function(err) {
  if (err) 
   throw err;
  else
  console.log("Connected!");
});