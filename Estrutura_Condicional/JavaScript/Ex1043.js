var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var valores=prompt("valores");
var [A,B,C]=valores.split(" ").map(Number);

var triangulo = A+B+C;
var trapezio = ((A+B) *C)/2;

var resultado = (Math.abs(B-C)<A && A<(B+C)) ?
                "Perimetro = " + triangulo.toFixed(1) :
                "Area = " + trapezio.toFixed(1);
console.log(resultado);