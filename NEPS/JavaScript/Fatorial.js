const fs = require("fs");
const input = fs.readFileSync(0, "utf-8");

let valor = parseInt(input.trim());

function fatorial(n) {
    let result = 1;

    for (let i = n; i > 0; i--) {
        result *= i;
    }

    return result;
}

console.log(fatorial(valor));