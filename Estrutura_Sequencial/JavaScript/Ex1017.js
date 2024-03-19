const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.trim().split('\n');

const tempoG = parseInt(lines[0]);
const velocidadeM = parseInt(lines[1]);

const distancia = velocidadeM * tempoG;
const gasto = distancia / 12;

console.log(gasto.toFixed(3));
