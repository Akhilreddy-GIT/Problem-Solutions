#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if (m > 90)
        cout << "A" << endl;
    else if (m > 70)
        cout << "B" << endl;
    else if (m >= 40)
        cout << "C" << endl;
    else
        cout << "F" << endl;
    return 0;
}