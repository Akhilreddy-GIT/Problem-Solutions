let N = parseInt(inputChar);

let i = 1;
let result = [];

while (i <= N) {
    result.push(i * i);
    i++;
}

console.log(result.join(' '));
