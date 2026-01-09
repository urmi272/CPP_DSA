#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long sum = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        long long sq = sqrt(sum);
        cout << (sq * sq == sum ? "YES" : "NO") << endl;
    }
    return 0;
}
