const fs = require("fs");

const input = fs.readFileSync(0, "utf8");

const valores = input.split("\n");

parseInt(valores[0]);
parseInt(valores[1]);
parseInt(valores[2]);
parseInt(valores[3]);

const terreno_1 = valores[0] * valores[1];
const terreno_2 = valores [2] * valores[3];

if(terreno_1 > terreno_2){
    console.log(`${terreno_1}`);
}else{
    console.log(`${terreno_2}`);
}