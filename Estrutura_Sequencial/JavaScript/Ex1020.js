const input = require('fs').readFileSync('/dev/stdin', 'utf8');
var idade = parseInt(input);

let ano = parseInt(idade / 365);
idade %= 365;

let mes = parseInt(idade / 30);
let dias = idade % 30;

console.log(`${ano} ano(s)\n${mes} mes(es)\n${dias} dia(s)`);