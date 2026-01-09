#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
long long calculateTotalPoints(string grid[10]) {
    long long ttl = 0;
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            if (grid[r][c] == 'X') {
                int ring_index = min({r, c, 9 - r, 9 - c});
                int point_value = ring_index + 1;
                ttl += point_value;
            }
        }
    }
    return ttl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        string grid[10];
        for (int i = 0; i < 10; i++) {
            if (!(cin >> grid[i])) break;
        }
        cout << calculateTotalPoints(grid) << "\n";
    }
    return 0;
}