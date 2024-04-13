var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var pares= []
for(i=0;i<5;i++){
    var num = parseFloat(prompt(""))
    if (num%2 === 0){
    pares.push(num)
    }
}
console.log(`${pares.length} valores pares`)