#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> height(n);
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin>>height[i];
    }
    int maxWater = 0;
    for(int i = 0; i<n; i++){
        int waterSection = 1;

        for(int j = i+1; j <n ; ++j){
            if(height[j]<= height[j-1]){
                waterSection++;
            }
            else{
                break;
            }
        }
        for(int j = i-1; j >=0; --j){
            if(height[j]<= height[j+1]){
                waterSection++;
            }
            else{
                break;
            }
        }
        maxWater = max(maxWater, waterSection);
    }
    cout << maxWater;
    return 0;
}