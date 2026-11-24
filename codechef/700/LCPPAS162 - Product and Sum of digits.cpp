
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int product = 1;

    while (N > 0) {
        int digit = N % 10;

        sum = sum + digit;
        product = product * digit;

        N = N / 10;
    }

    cout << sum << " " << product;

    return 0;
}
