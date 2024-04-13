var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) { return lines.shift();};

var b=0;
var a;
var n=6;
for(i=0; i<n;i++){
    var a=parseFloat(lines.shift())
    if(a>0){
        b++;
    }
} console.log(b + " valores positivos")