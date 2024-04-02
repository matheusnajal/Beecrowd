var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var entrada = prompt().split(" ");
var hora_saida = parseInt(entrada[0]);
var tempo_viagem = parseInt(entrada[1]);
var fuso_destino = parseInt(entrada[2]);

var hora_chegada = hora_saida + tempo_viagem + fuso_destino;

if (hora_chegada < 0) {
    hora_chegada += 24;
} else if (hora_chegada >= 24) {
    hora_chegada %= 24;
}

console.log(hora_chegada);