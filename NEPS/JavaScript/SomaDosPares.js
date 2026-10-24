const fs = require("fs");

const input = fs.readFileSync(0, "utf-8");

const array_valores = input.split(/\s+/);

let total = 0;

for (let i = 0; i < array_valores.length; i++){
    let numero = parseInt(array_valores[i]);
    if(numero % 2 == 0){
        total += numero; 
    }
}

console.log(total);