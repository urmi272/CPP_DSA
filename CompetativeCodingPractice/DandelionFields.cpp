#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
         vector<long long> evens, odds;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) evens.push_back(a[i]);
            else odds.push_back(a[i]);
        }

        if (odds.empty()) {
            cout << 0 << "\n";
            continue;
        }

        long long sumE = 0;
        for (auto x : evens) sumE += x;

        sort(odds.rbegin(), odds.rend());  
        int k = (odds.size() + 1) / 2;  
        long long sumO = 0;
        for (int i = 0; i < k; i++) sumO += odds[i];

        cout << sumE + sumO << "\n";
    }
    return 0;

}
