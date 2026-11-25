
let N = parseInt(inputChar);

let sum = 0;
let product = 1;
let num = N;

while (num > 0) {
    let digit = num % 10;
    sum += digit;
    product *= digit;
    num = Math.floor(num / 10);
}

console.log(sum + " " + product);
