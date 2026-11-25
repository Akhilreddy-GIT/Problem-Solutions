let x = 2;
let y = 3;
let z = 1;

if (x < y) {
    if (x < z) {
        console.log(x);
    } else {
        console.log(z);
    }
} else {
    if (y < z) {
        console.log(y);
    } else {
        console.log(z);
    }
}