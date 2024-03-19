var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var [peca1, qnt1, pecav1] = prompt().split(' ').map(parseFloat);
var [peca2, qnt2, pecav2] = prompt().split(' ').map(parseFloat);

total = qnt1 * pecav1 + qnt2 * pecav2;
console.log("VALOR A PAGAR: R$", total.toFixed(2));