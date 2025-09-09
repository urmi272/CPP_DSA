#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int zeros = count(s.begin(), s.end(), '0');
        int count = 0;
        for (int i = 0; i<zeros; i++){
            if (s[i] == '1') ++count;
        }
        cout << count << endl;
    }
    return 0;
}