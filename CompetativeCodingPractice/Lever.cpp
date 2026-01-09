#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int iterations = 0;
        while (true) {
            bool changed = false;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i] && a[i] > 0) {
                    a[i]--;
                    changed = true;
                    break;
                } 
                else if (a[i] < b[i] && a[i] < n - 1) {
                    a[i]++;
                    changed = true;
                }
                else if (a[i] == b[i]) {
                    continue;
                }
            }
            iterations++;
            if (!changed) {
                break;
            }
        }
        cout << iterations << endl;
    }
    return 0;
}