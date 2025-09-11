#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a, b;
    int maxPassengers = 0;
    int currentPassengers = 0;
    int maxCapacity = 0;
    while(n--){
        cin>>a>>b;
        currentPassengers += b - a;
        if(currentPassengers > maxPassengers){
            maxPassengers = currentPassengers;
            maxCapacity = max(maxCapacity, maxPassengers);
        }
    }
    cout<<maxCapacity;
    return 0;
}