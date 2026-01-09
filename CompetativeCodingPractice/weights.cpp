#include <iostream>
#include <vector>
using namespace std;

int MaxWeight(vector<int> weights,int maxWeight){
    int n = weights.size();
    int count=1;
    for(int i=0; i<n; i++){
        if(weights[i] <= maxWeight){
            count++;
        }
        if(weights[i] + weights[i+1] <= maxWeight){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector <int> weights(n);
    for(int i=0; i<n; i++){
        cin>>weights[i];
    }
    int maxWeight;
    cin >> maxWeight;
    cout<< MaxWeight(weights, maxWeight);
    return 0;
}