var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

while(true){
    var [X,Y] = prompt().split(" ").map(Number);
    var resultado = (X > 0 && Y >0) ? "primeiro" : (X < 0 && Y >0) ? "segundo" :
                    (X < 0 && Y <0) ? "terceiro" : (X > 0 && Y <0) ? "quarto" :
                    "igual";
    if(resultado == "igual")
        break;
    console.log(resultado);
}