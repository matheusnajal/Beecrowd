var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var prompt = function(texto) {return lines.shift();};

var A = parseFloat(prompt());
var B = parseFloat(prompt());

media = (A * 3.5 + B * 7.5) / 11;
console.log("MEDIA =", media.toFixed(5));