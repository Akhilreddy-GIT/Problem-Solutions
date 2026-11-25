// This comes from input
let N = parseInt(inputChar);

let count = 0;
let num = N;

while (num > 0) {
    count++;
    num = Math.floor(num / 10);
}

console.log(count);
