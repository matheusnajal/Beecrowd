var input = require('fs').readFileSync('C:\Program Files\Git\dev', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var raio = parseFloat(prompt());
var n = 3.14159;

var area = n * (Math.pow(raio, 2));
console.log("A=" + area.toFixed(4));