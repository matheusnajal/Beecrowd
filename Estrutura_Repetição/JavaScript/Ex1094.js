var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var N = parseInt(prompt("Numeros de casos"))
var Total;
var R = 0
var C = 0
var S = 0

    for(var i = 0; i<N; i++){
    var entrada = prompt("Quantia//Tipo")
    var [Q, T] = entrada.split(" ")
    Q = parseInt(Q);
    T = String(T)

    if(T == "C"){
    C+=Q
    }
if(T == "R"){
    R+=Q
}
if(T == "S"){
    S+=Q
}

    Total = C + R + S}

console.log("Total: " + Total + " cobaias")
console.log("Total de coelhos: " + C)
console.log("Total de ratos: " + R)
console.log("Total de sapos: " + S)
console.log("Percentual de coelhos: " + ((C/Total)*100).toFixed(2) + " %")
console.log("Percentual de ratos: " + ((R/Total)*100).toFixed(2) + " %")
console.log("Percentual de sapos: " + ((S/Total)*100).toFixed(2) + " %")