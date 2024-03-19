var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var nome = prompt();
var salario = parseFloat(prompt());
var vendas = parseFloat(prompt());

total = salario + (vendas * 0.15);
console.log("TOTAL = R$", total.toFixed(2));