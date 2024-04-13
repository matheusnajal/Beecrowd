var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var X = lines.shift()
var Y = lines.shift()

var maior = Math.max(X,Y)
var menor = Math.min(X,Y)
var soma = 0

for(let i = menor + 1; i < maior; i++){
    if(i%2 != 0){
        soma += i
    }
}
console.log(soma)