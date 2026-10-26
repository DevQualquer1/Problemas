const fs = require("fs");
const input = fs.readFileSync(0, "utf-8");

const valor = parseInt(input.trim());

const fib = (n) => {
    if (n === 0 || n === 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
};

console.log(fib(valor));