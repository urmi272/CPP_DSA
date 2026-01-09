#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, a, b;
        cin>>n>>a>>b;
        bool isSymmetric = ((n-b)%2 ==0) && (a<=b || (n-a)%2 ==0);
        cout<<(isSymmetric ? "YES" : "NO")<<endl; 
    }
    return 0;
}