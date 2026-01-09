#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool allUpper = true;
    bool allUpperExceptFirst = true;

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 && islower(s[i])) {
            allUpper = false;
        }
        if (i != 0 && islower(s[i])) {
            allUpper = false;
            allUpperExceptFirst = false;
        }
    }

    if (allUpper || allUpperExceptFirst) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }    
    cout<<s;
    return 0;
}