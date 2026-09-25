#include <stdio.h>

int main() {
    float fahrenheit = 98.3;
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%f", celsius);

    return 0;
}
