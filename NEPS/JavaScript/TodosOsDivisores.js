const fs = require("fs");

const input = fs.readFileSync(0, "utf8");

const valor = parseInt(input);

for(let i = 1; i <= valor; i++){
    if(valor % i == 0){
        process.stdout.write(i + " ");
    }
}