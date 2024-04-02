var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var distancia = parseInt(input);

function calcular_pontuacao(distancia) {
    if (distancia <= 800) {
        return 1;
    } else if (distancia <= 1400) {
        return 2;
    } else {
        return 3;
    }
}

var pontuacao = calcular_pontuacao(distancia);

console.log(pontuacao);