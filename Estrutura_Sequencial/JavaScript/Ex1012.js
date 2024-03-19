var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var [A, B, C] = prompt().split(' ').map(parseFloat);

triangulo = (A * C) / 2;
circulo = 3.14159 * Math.pow(C, 2);
trapezio = ((A + B) * C) / 2;
quadrado = Math.pow(B, 2);
retangulo = A * B;

console.log("TRIANGULO: " + triangulo.toFixed(3) +
            "\nCIRCULO:", circulo.toFixed(3) +
            "\nTRAPEZIO:", trapezio.toFixed(3) +
            "\nQUADRADO:", quadrado.toFixed(3) +
            "\nRETANGULO:",retangulo.toFixed(3));