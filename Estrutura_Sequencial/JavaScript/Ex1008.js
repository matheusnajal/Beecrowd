var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

funcionario = parseInt(prompt());
horas = parseInt(prompt());
salario = parseFloat(prompt());

salariof = salario * horas;
console.log("NUMBER = " + funcionario +
            "\nSALARY = U$ " + salariof.toFixed(2))