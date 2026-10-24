const fs = require("fs");

const input = fs.readFileSync(0, "utf-8");

const array_valores = input.split(/\s+/);

let qnts_sequencia = 0;
let ultimo_numero = 0;
let maior_sequencia = 0;

for (let i = 0; i < array_valores.length; i++){
    let numero = parseInt(array_valores[i]);
    
    if(numero > ultimo_numero){
        qnts_sequencia++;
    }else{
        qnts_sequencia = 1;
    }

    ultimo_numero = numero;

    if(qnts_sequencia > maior_sequencia){
        maior_sequencia = qnts_sequencia;
    }
}

console.log(maior_sequencia);