
#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("Largest: %d", A);
    } 
    else if (B >= A && B >= C) {
        printf("Largest: %d", B);
    } 
    else {
        printf("Largest: %d", C);
    }

    return 0;
}


