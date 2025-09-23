#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<string> names;
    for (long long i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (find(names.begin(), names.end(), name) == names.end()) {
            names.push_back(name);
            cout << "OK" << endl;
        } else {
            int count = 1;
            string newName = name + to_string(count);
            while (find(names.begin(), names.end(), newName) != names.end()) {
                count++;
                newName = name + to_string(count);
            }
            names.push_back(newName);
            cout << newName << endl;
        }
    }
    return 0;

}