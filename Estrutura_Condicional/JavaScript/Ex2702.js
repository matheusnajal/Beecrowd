var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var disponiveis = prompt().split(" ").map(Number);
var requisitadas = prompt().split(" ").map(Number);

var nao_atendidos = 0;
for (var i = 0; i < 3; i++) {
    nao_atendidos += Math.max(0, requisitadas[i] - disponiveis[i]);
}

console.log(nao_atendidos);