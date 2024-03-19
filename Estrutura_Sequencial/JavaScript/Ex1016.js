const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8');
const distancia = parseInt(input.trim());

const tempo = distancia * 2;

console.log(`${tempo} minutos`);
