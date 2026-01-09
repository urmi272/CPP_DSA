#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;
    cout<<sum;
    return 0;
}