var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var i = 0;
while(i <= 100) { 
    i++;
    if( i% 2 === 1){
        console.log(i);
    } 
}