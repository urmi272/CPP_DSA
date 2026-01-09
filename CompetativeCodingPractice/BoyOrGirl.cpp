#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string s;
    cin>> s;
    set<char> unique_chars;
    for(char c : s) {
        unique_chars.insert(c);
    }
    if(unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;

}