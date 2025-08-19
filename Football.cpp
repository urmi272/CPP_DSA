#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 1;
    int maxcount = 1;
    for (int i = 0; i < s.size() - 1; i++){
        if(s[i]==s[i+1]){
            count++;
            maxcount = max(maxcount, count);
        }
        else{
            count = 1;
        }
    }
    if(maxcount >= 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}