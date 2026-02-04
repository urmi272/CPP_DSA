#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6, 2};
    int n = arr.size();
    cout << "Leaders in the array are: ";
    int maxright = arr[n-1];
    for(int i = n-1; i>=0; i--){
        if(arr[i] >= maxright){
            cout << arr[i] << " ";
            maxright = arr[i];
        }
    }
    return 0;
}