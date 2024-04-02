var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var valores=prompt("valores")
    var [hInicio,mInicio,hFim,mFim]=valores.split(" ").map(Number)
    
    minutosTotais=mFim - mInicio
    horasTotais = (hFim - hInicio) * 60
    tempoTotal = horasTotais + minutosTotais
    
    if(tempoTotal <= 0){
        tempoTotal += 24*60
    }
    
    h = parseInt(tempoTotal/60)
    m = tempoTotal%60
    
    console.log("O JOGO DUROU "+h+" HORA(S) E "+m+" MINUTO(S)")