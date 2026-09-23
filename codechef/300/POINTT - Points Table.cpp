#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, A, B;
    cin >> X >> Y >> A >> B;

    if (X > A)
        cout << "Alice";
    else if (X < A)
        cout << "Bob";
    else {
        // Primary scores are equal
        if (Y >= B)
            cout << "Alice";
        else
            cout << "Bob";
    }

    return 0;
}