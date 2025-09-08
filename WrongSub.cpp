#include <iostream>
using namespace std;
int main(){
    long long n; 
    int k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0){
            n--;
        }
        else{
            n/=10;
        }
    }
    cout<<n;
    return 0;
}