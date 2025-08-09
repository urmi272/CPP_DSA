#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                n--;
                break;
            }
        }
    }
    if (n % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}