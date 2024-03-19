const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const distancia = parseInt(lines.shift());
const combustivel = parseFloat(lines.shift());

const consumo = distancia / combustivel;

console.log(consumo.toFixed(3) + ' km/l');