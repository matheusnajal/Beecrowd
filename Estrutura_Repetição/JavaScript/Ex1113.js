var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

while(true){
    var [X,Y]=prompt().split(" ").map(Number)
    
    if(X == Y)
        break;
        
var resultado = X > Y ? "Decrescente" : "Crescente"
console.log(resultado)
}