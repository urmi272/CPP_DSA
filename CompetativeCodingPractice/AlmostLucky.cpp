#include <iostream>
using namespace std;
bool isLucky(int n){
    while(n){
        int d=n%10;
        if(d!=4 && d!=7){
            return false;
        }
        n/=10;
    }
    return true;
}
bool isAlmostLucky(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0 && isLucky(i)){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(isAlmostLucky(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}