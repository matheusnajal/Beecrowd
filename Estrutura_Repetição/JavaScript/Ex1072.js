var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var N = parseInt(prompt("Quantidade"));

var ci = 0;
var co = 0;

for(var i = 0; i < N; i++){
    var X = parseInt(prompt("Valores"));
    if(X >= 10 && X <=20){
        ci++
    } else {
        co++
    }
}
console.log(ci + " in")
console.log(co + " out")