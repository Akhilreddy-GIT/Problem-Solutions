#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long ans = 0;
    if (a + b <= c) {
        ans += c - (a + b) + 1;
    }
    if (b + c <= a) {
        ans += a - (b + c) + 1;
    }
    if (a + c <= b) {
        ans += b - (a + c) + 1;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}