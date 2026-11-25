let N = parseInt(inputChar);

let factorial = 1;
let i = 1;

while (i <= N) {
    factorial *= i;
    i++;
}

console.log(factorial);
