var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var [A, B, C] = prompt().split(' ').map(Number);

maiorAB = (A + B + Math.abs(A - B)) / 2;
maior = (maiorAB + C + Math.abs(maiorAB - C)) / 2;

console.log(maior, "eh o maior");