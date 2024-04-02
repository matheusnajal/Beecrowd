var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var frase=prompt("frase")
var[A,B,C,D]=frase.split(" ")
A=parseFloat(A)
B=parseFloat(B)
C=parseFloat(C)
D=parseFloat(D)

var media=parseFloat(((A*2+B*3+C*4+D*1)/10).toFixed(1))

console.log("Media: "+media.toFixed(1))

if(media<5){
    console.log("Aluno reprovado.")
}
if(media>=7){
    console.log("Aluno aprovado.")
}
if(media>=5 && media<=6.9){
    var E=parseFloat(prompt(""))
    console.log("Aluno em exame.")
    console.log("Nota do exame: "+E.toFixed(1))
    var mediafinal= parseFloat((media+E)/2)
    if (mediafinal>=5){
        console.log("Aluno aprovado.")
        console.log("Media final: "+mediafinal.toFixed(1))
    }
    if(mediafinal<5){
    console.log("Aluno reprovado.")
    console.log("Media final: "+mediafinal.toFixed(1))
    }
}