const fs = require("fs");

const input = fs.readFileSync(0, "utf8");

const valores = input.split("\n");

const quantos_numeros = parseInt(valores[0]);
const numeros = valores[1].trim().split(" ").map(Number);

let quantos = 0;

for(let i = 0; i < quantos_numeros; i++){
    if(numeros[i] == 1 && numeros[i + 1] == 0 && numeros[i + 2] == 0){
        quantos++;
    }
}

console.log(quantos);