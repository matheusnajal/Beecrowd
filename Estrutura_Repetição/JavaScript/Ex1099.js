var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { 
    return lines.shift();
};

    var n = parseInt(prompt());

    for (var i = 0; i < n; i++) {
        var soma = 0;
        var entrada = prompt();
        var numeros = entrada.split(" ");
        var x = parseInt(numeros[0]);
        var y = parseInt(numeros[1]);

        var menor = Math.min(x, y);
        var maior = Math.max(x, y);

        for (var j = menor + 1; j < maior; j++) {
            if (j % 2 !== 0) {
                soma += j;
            }
        }
        console.log(soma);
    }