const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

var valor = parseInt(lines.shift());
let valorT = valor;

let nota100 = parseInt(valor / 100);
valor %= 100;

let nota50 = parseInt(valor / 50);
valor %= 50;

let nota20 = parseInt(valor / 20);
valor %= 20;

let nota10 = parseInt(valor / 10);
valor %= 10;

let nota5 = parseInt(valor / 5);
valor %= 5;

let nota2 = parseInt(valor / 2);
valor %= 2;

let nota1 = valor;

console.log(`${valorT}\n${nota100} nota(s) de R$ 100,00\n${nota50} nota(s) de R$ 50,00\n${nota20} nota(s) de R$ 20,00\n${nota10} nota(s) de R$ 10,00\n${nota5} nota(s) de R$ 5,00\n${nota2} nota(s) de R$ 2,00\n${nota1} nota(s) de R$ 1,00`);