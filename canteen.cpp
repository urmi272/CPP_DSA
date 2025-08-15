#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, t;
    cin >> n >>t;
    string s;
    cin >> s;
    while(t--){
        string a = s;
        for (int i = 0; i < n - 1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                a[i]= 'G';
                a[i+1]= 'B';
                i++;
            }
        }
        s = a;
    }
    cout << s;
    return 0;
}