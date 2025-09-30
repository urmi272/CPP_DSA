#include <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    int n;
    while(t--){
        cin>>n;
        int a = n%10;
        n/=10;
        int b = n%10;
        cout<<a+b<<endl;
    }
    return 0;
}