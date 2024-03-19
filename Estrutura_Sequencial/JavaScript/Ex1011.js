var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var raio = parseFloat(prompt());
var pi = 3.14159;

volume = (4/3) * pi * Math.pow(raio, 3);
console.log("VOLUME =", volume.toFixed(3));