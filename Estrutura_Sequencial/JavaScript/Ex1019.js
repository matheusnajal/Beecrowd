const input = require('fs').readFileSync('/dev/stdin', 'utf8');
var segundos = parseInt(input);

let horas = parseInt(segundos / 3600);
segundos %= 3600;

let minutos = parseInt(segundos / 60);
segundos %= 60;

console.log(`${horas}:${minutos}:${segundos}`);