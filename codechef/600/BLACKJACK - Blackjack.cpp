#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        int third = 21 - A - B;

        if (third >= 1 && third <= 10)
            cout << third << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}



