var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

const [A, B] = prompt("Código de um item e a quantidade deste item").split(" ").map(Number);

let valor1 = 0

if (A == 1) {
    Valor1 = 4;   
} else if(A == 2) {
    Valor1 = 4.5;   
} else if(A == 3) {
    Valor1 = 5;   
} else if(A == 4) {
    Valor1 = 2;   
} else if(A == 5) {
    Valor1 = 1.5;   
}

let Total = Valor1 * B;

console.log("Total: R$ " + Total.toFixed(2));