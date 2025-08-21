#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    for (char digit : s) { 
        if (digit == '4' || digit == '7') { 
            count++; 
        }
    }
   
    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;

}