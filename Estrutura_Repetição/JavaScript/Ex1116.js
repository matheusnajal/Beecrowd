var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

    var N=parseInt(prompt(""));
    
    for(i=0;i<N;i++){
        var [X,Y]=prompt("").split(" ").map(Number)
        
        var div=X/Y
        
        if(Y===0){
            console.log("divisao impossivel")
        } else{
            console.log(div.toFixed(1))
   }
}