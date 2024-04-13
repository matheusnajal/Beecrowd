var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var maior = 0
var posi = 1
for(var i = 1; i<= 100; i++){
    var N = parseInt(prompt("Valores"))
    if(N > maior){
        maior = N
        posi = i
    }
}
console.log(maior)
console.log(posi)