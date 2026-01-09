#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(char c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES" << endl;
            return 0;
        }
        else{
            continue;
        }
    }
    cout << "NO" << endl;
    return 0;
}
