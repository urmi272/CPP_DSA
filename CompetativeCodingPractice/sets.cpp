#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    string input;
    cin >> input;
    set<char> s;

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            s.insert(c);
        }
    }
    cout << s.size() << endl;
    return 0;
}
