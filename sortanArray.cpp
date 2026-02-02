#include <iostream>
#include<vector>
using namespace std;
void sort(vector<int> &arr){
    //create 3 pointera
    int low=0, mid = 0;
    int high = arr.size() - 1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {2,0,1,2,1,0,0,1,2,0};
    sort(arr);
    cout << "Sorted array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
