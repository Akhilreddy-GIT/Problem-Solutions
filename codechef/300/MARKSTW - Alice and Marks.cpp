
#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X >= 2 * Y) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}
