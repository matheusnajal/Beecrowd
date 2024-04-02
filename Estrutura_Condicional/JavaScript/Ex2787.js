var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

function cor_canto_inferior_direito(L, C) {
    if ((L + C) % 2 === 0) {
        return 1;
    } else {
        return 0;
    }
}

var L = parseInt(prompt());
var C = parseInt(prompt());

console.log(cor_canto_inferior_direito(L, C));