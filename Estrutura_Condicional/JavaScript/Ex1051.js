var lines = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n');
var prompt = function(texto) { return lines.shift(); };

const salario = parseFloat(prompt("Digite o salário:"));

if (salario <= 2000.00) {
    console.log("Isento");
} else {
    let imposto;
    if (salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
    } else if (salario <= 4500.00) {
        imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
    } else {
        imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
    }

    console.log("R$ " + imposto.toFixed(2));
}