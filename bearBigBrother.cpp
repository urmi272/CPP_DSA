#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>> a>>b;
    int year = 0;
    while(a<=b){
        if(a<=b){
            a = 3*a;
            b = 2*b;
            year++;
        }
        else{
            break;
        }
    }
    cout << year;
    return 0;
}