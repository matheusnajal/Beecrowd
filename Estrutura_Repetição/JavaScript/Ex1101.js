const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on('line', (input) => {
    const [x, y] = input.split(' ').map(Number);

    if (x <= 0 || y <= 0) {
        rl.close();
    } else {
        let menor = Math.min(x, y);
        let maior = Math.max(x, y);
        let soma = 0;

        for (let i = menor; i < maior + 1; i++) {
            soma += i;
            process.stdout.write(i + ' ');
        }

        console.log('Sum=' + soma);
    }
});