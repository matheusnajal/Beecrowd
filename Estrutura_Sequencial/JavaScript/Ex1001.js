var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var a = parseInt(prompt("Insira o primeiro valor: "));
var b = parseInt(prompt("Insira o segundo valor:"));

var soma = a + b;

console.log("X = " + soma);