#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    long long n;
    cin >> n;
    unordered_map<string, int> nameCount;
    for (long long i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (nameCount.find(name) == nameCount.end()) {
            nameCount[name] = 0;
            cout << "OK" << endl;
        } else {
            cout << name << ++nameCount[name] << endl;
        }
    }
    return 0;
}