var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var T = parseInt(prompt());

var regras = {
    "tesoura papel": "Bazinga!",
    "papel pedra": "Bazinga!",
    "pedra lagarto": "Bazinga!",
    "lagarto Spock": "Bazinga!",
    "Spock tesoura": "Bazinga!",
    "tesoura lagarto": "Bazinga!",
    "lagarto papel": "Bazinga!",
    "papel Spock": "Bazinga!",
    "Spock pedra": "Bazinga!",
    "pedra tesoura": "Bazinga!",
    "tesoura Spock": "Raj trapaceou!",
    "Spock papel": "Raj trapaceou!",
    "papel tesoura": "Raj trapaceou!",
    "tesoura pedra": "Raj trapaceou!",
    "pedra papel": "Raj trapaceou!",
    "papel lagarto": "Raj trapaceou!",
    "lagarto pedra": "Raj trapaceou!",
    "pedra Spock": "Raj trapaceou!",
    "Spock lagarto": "Raj trapaceou!",
    "lagarto tesoura": "Raj trapaceou!"
};

for (var t = 1; t <= T; t++) {
    var escolha_sheldon, escolha_raj;
    [escolha_sheldon, escolha_raj] = prompt().split(" ");
    if (escolha_sheldon === escolha_raj) {
        console.log("Caso #" + t + ": De novo!");
    } else {
        var resultado = regras[escolha_sheldon + " " + escolha_raj];
        console.log("Caso #" + t + ": " + resultado);
    }
}