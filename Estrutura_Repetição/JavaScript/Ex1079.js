var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var N=parseInt(prompt(""))

for(i=0;i<N;i++){
    var [A,B,C]=prompt().split(" ").map(Number);
    console.log(((A*2+B*3+C*5)/10).toFixed(1))
}