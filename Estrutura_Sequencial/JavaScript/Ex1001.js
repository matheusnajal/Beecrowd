var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var a = parseInt(prompt())
var b = parseInt(prompt())

var soma = a + b

console.log("X = ", soma)