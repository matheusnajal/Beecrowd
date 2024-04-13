var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var i = 1;
while(i <= 100) { 
    i++;
    if( i% 2 == 0){
        console.log(i);
    } 
}