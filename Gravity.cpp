#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arrays(n);
        int maxlen = 0;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            arrays[i].resize(k);
            for (int j = 0; j < k; j++) cin >> arrays[i][j];
            maxlen = max(maxlen, k);
        }

        vector<vector<int>> candidates;
        for (auto &arr : arrays) {
            if ((int)arr.size() == maxlen) {
                candidates.push_back(arr);
            }
        }

        vector<int> best = candidates[0];
        for (auto &cand : candidates) {
            if (cand < best) best = cand; 
        }

        for (int j = 0; j < maxlen; j++) {
            cout << best[j] << (j + 1 == maxlen ? '\n' : ' ');
        }
    }
    return 0;
}
