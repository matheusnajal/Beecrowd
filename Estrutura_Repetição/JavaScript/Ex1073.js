var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var X = Number(prompt());
for(var i = 1; i <= X; i++ ) {
    if(i%2 == 0) {
        console.log(i + '^2 = '+ Math.pow(i,2));
    }
}