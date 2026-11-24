
#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C) {
        printf("Equilateral");
    }
    else if (A == B || B == C || A == C) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }

    return 0;
}
