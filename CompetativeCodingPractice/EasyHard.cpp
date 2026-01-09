#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int sum=0;
    while(n--){
        cin>>x;
        sum+=x;
    }
    if(sum>0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}