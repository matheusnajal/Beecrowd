var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var entrada = prompt().split(" ");
var a = parseInt(entrada[0]);
var b = parseInt(entrada[1]);
var c = parseInt(entrada[2]);

if (a >= b + c || b >= a + c || c >= a + b) {
    console.log("Invalido");
} else {
    var retangulo;
    if (a**2 === b**2 + c**2 || b**2 === a**2 + c**2 || c**2 === a**2 + b**2) {
        retangulo = "S";
    } else {
        retangulo = "N";
    }
    
    if (a === b && b === c) {
        console.log("Valido-Equilatero");
    } else if (a === b || a === c || b === c) {
        console.log("Valido-Isoceles");
    } else {
        console.log("Valido-Escaleno");
    }
    
    console.log("Retangulo:", retangulo);
}