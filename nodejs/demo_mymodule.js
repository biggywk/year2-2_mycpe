var http = require('http');
var dt = require('./myfirstmodule');
http.createServer(function (req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end({dt});
}).listen(8080);