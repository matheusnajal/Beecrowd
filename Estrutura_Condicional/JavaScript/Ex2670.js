var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

function tempo_minimo(A1, A2, A3) {
    var tempo_no_primeiro_andar = A2 * 2 + A3 * 4;
    var tempo_no_segundo_andar = A1 * 2 + A3 * 2;
    var tempo_no_terceiro_andar = A1 * 4 + A2 * 2;

    return Math.min(tempo_no_primeiro_andar, tempo_no_segundo_andar, tempo_no_terceiro_andar);
}

var A1 = parseInt(prompt());
var A2 = parseInt(prompt());
var A3 = parseInt(prompt());

console.log(tempo_minimo(A1, A2, A3));