var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var nota = parseInt(input);

if (nota === 0) {
    console.log("E");
} else if (nota <= 35) {
    console.log("D");
} else if (nota <= 60) {
    console.log("C");
} else if (nota <= 85) {
    console.log("B");
} else if (nota <= 100) {
    console.log("A");
}