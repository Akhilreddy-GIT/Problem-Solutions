
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    while (N > 0) {
        N = N / 10;
        count++;
    }

    cout << count;

    return 0;
}
