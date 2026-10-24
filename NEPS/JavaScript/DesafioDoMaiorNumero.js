const fs = require("fs");

const input = fs.readFileSync(0, "utf8");
const valores = input.split(" ");

let maior_numero = 0;

for(let i = 0; i < 100; i++){
    if(typeof valores[i] != "number"){
        valores[i] = parseInt(valores[i])
    }

    if(valores[i] != 0){
        if(valores[i] > maior_numero){
            maior_numero = valores[i];
        }
    }else{
        break;
    }
}

console.log(`${maior_numero}`);