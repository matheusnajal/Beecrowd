var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var valores=prompt("valores")
var [A,B]=valores.split(" ").map(Number)

var verificar = (A > B) ? A % B : B % A

if(verificar == 0){
 console.log("Sao Multiplos")   
} else {
    console.log("Nao sao Multiplos")
}