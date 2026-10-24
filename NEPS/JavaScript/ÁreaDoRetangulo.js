const fs = require("fs");

let input = fs.readFileSync(0, "utf8");

let valores = input.split("\n");

parseInt(valores[0]);
parseInt(valores[1]);

console.log(valores[0] * valores[1]);