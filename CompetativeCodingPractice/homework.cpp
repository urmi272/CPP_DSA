#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >>m;
        string b, c;
        cin >> b>> c;
        for(int i =0; i<m; i++){
            if(c[i] == 'V') {
                a = b[i] + a;
            } 
            else{
                a += b[i];
            }
        }
        cout << a << endl;
    }
    return 0;
}