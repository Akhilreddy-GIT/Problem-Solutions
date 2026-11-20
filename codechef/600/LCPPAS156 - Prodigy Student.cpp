#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    int p1, p2;
    cin >> name1 >> name2;
    cin >> p1 >> p2;
    
    if (p1 > p2)
        cout << name1 << endl;
    else if (p2 > p1)
        cout << name2 << endl;
    else
        cout << "equal" << endl;
    return 0;
}