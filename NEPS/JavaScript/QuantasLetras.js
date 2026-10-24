const fs = require("fs");
const input = fs.readFileSync(0, "utf8");
const valores = input.split("\n");

const palavra = valores[0];
const letra = valores[1];

let tem_quantas = 0;

for(let i = 0; i < palavra.length; i++){
    if(palavra[i] == letra){
        tem_quantas++;
    }
}

console.log(tem_quantas);