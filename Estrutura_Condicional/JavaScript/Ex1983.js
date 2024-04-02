var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var n = parseInt(prompt());

var melhor_nota = 0;
var melhor_aluno = null;

for (var i = 0; i < n; i++) {
    var entrada = prompt().split(" ");
    var aluno = entrada[0];
    var nota = parseFloat(entrada[1]);
    if (nota > melhor_nota) {
        melhor_nota = nota;
        melhor_aluno = aluno;
    }
}

if (melhor_nota >= 8) {
    console.log(melhor_aluno);
} else {
    console.log("Minimum note not reached");
}