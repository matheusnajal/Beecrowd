const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let entrada_inicio, entrada_inicio_dia, entrada_inicio_tempo;
let entrada_fim, entrada_fim_dia, entrada_fim_tempo;

rl.question('', (input) => {
  entrada_inicio = input.split(' ');
  entrada_inicio_dia = parseInt(entrada_inicio[1]);

  rl.question('', (input) => {
    entrada_inicio_tempo = input.split(' : ').map(Number);

    rl.question('', (input) => {
      entrada_fim = input.split(' ');
      entrada_fim_dia = parseInt(entrada_fim[1]);

      rl.question('', (input) => {
        entrada_fim_tempo = input.split(' : ').map(Number);

        const inicio = new Date(2024, 3, entrada_inicio_dia, ...entrada_inicio_tempo);
        const fim = new Date(2024, 3, entrada_fim_dia, ...entrada_fim_tempo);

        const diferenca = fim - inicio;
        const dias = Math.floor(diferenca / (1000 * 60 * 60 * 24));
        const segundos = Math.floor((diferenca / 1000) % 60);
        const minutos = Math.floor((diferenca / (1000 * 60)) % 60);
        const horas = Math.floor((diferenca / (1000 * 60 * 60)) % 24);

        console.log(`${dias} dia(s)`);
        console.log(`${horas} hora(s)`);
        console.log(`${minutos} minuto(s)`);
        console.log(`${segundos} segundo(s)`);

        rl.close();
      });
    });
  });
});