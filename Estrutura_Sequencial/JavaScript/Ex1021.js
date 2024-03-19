const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const valor = parseFloat(input);

let centavos = parseInt(valor * 100);

let notas100 = parseInt(centavos / 10000);
centavos %= 10000;

let notas50 = parseInt(centavos / 5000);
centavos %= 5000;

let notas20 = parseInt(centavos / 2000);
centavos %= 2000;

let notas10 = parseInt(centavos / 1000);
centavos %= 1000;

let notas5 = parseInt(centavos / 500);
centavos %= 500;

let notas2 = parseInt(centavos / 200);
centavos %= 200;

let moedas1 = parseInt(centavos / 100);
centavos %= 100;

let moedas050 = parseInt(centavos / 50);
centavos %= 50;

let moedas025 = parseInt(centavos / 25);
centavos %= 25;

let moedas010 = parseInt(centavos / 10);
centavos %= 10;

let moedas005 = parseInt(centavos / 5);
centavos %= 5;

let moedas001 = centavos;

console.log(`NOTAS:
${notas100} nota(s) de R$ 100.00
${notas50} nota(s) de R$ 50.00
${notas20} nota(s) de R$ 20.00
${notas10} nota(s) de R$ 10.00
${notas5} nota(s) de R$ 5.00
${notas2} nota(s) de R$ 2.00
MOEDAS:
${moedas1} moeda(s) de R$ 1.00
${moedas050} moeda(s) de R$ 0.50
${moedas025} moeda(s) de R$ 0.25
${moedas010} moeda(s) de R$ 0.10
${moedas005} moeda(s) de R$ 0.05
${moedas001} moeda(s) de R$ 0.01`);
