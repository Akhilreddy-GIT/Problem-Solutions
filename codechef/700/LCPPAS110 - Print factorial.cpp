
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;
    int fact = 1;

    do {
        fact = fact * i;
        i++;
    } while (i <= N);

    cout << fact;

    return 0;
}
