#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] != t[n-1 -i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}