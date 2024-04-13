var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

while(true){
    var senha = Number(prompt())
    var resultado = senha != 2002 ? "Senha Invalida" : "Acesso Permitido"
    console.log(resultado)
    if(resultado == "Acesso Permitido")
    break;
    
}