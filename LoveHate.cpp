#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "I";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << " hate";
        } else {
            cout << " love";
        }
        if (i < n - 1) {
            cout << " that I";
        }
    }
    cout << " it" << endl;
    return 0;
}

