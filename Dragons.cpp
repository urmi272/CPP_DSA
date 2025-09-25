#include <iostream>
#include <set>
using namespace std;
int main(){
    int k, l, m, n;
    cin >> k >> l >> m >> n;
    long long d;
    cin >> d;
    set<long long> dragon;
    for(long long i = 1; i <= d; i++){
        dragon.insert(i);
    }
    for(long long i = k; i <= d; i += k){
        dragon.erase(i);
    }
    for(long long i = l; i <= d; i += l){
        dragon.erase(i);
    }
    for(long long i = m; i <= d; i += m){
        dragon.erase(i);
    }
    for(long long i = n; i <= d; i += n){
        dragon.erase(i);
    }
    cout << d - dragon.size();

}