#include <iostream>
#include <vector>
using namespace std;

int nextPrime(int x){
    for(int i=x+1; ; i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) return i;
    }
}
int main(){
    int n , m;
    cin >> n >> m;
    if(n<m){
        int num = nextPrime(n);
        if(num==m){
            cout << "YES" << endl;
            return 0;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
        return 0;
    }
}