#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    
    int groups[5] = {0};
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        groups[s]++;
    }

    int taxis = groups[4];

    int pairs = min(groups[3], groups[1]);
    taxis += pairs;
    groups[3] -= pairs;
    groups[1] -= pairs;
    taxis += groups[3];

    taxis += groups[2]/2; 
    if (groups[2] % 2 == 1) {
        groups[1] -= min(groups[1], 2);
        taxis++; 
    }
    
    if(groups[1]>0){
        taxis += (groups[1]+3)/4;
    }

    cout<<taxis;
    return 0;
}