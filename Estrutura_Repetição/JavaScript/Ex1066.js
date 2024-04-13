var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var positivos=[]
var negativos=[]
var pares=[]
var impares=[]

for(i=0;i<5;i++){
    var num = parseFloat(prompt(""))
    if (num > 0){
        positivos.push(num)
    } if (num <0){
        negativos.push(num)
    } if (num%2===0){
        pares.push(num)
    } if (num%2!==0){
        impares.push(num)
    }
}
console.log(`${pares.length} valor(es) par(es)`)
console.log(`${impares.length} valor(es) impar(es)`)
console.log(`${positivos.length} valor(es) positivo(s)`)
console.log(`${negativos.length} valor(es) negativo(s)`)