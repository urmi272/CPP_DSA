#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] = {0}; //hash for 0-12 (initially all 0)
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1 ;
    }

    int q;
    cin >> q;
    while(q--){
        int key;
        cin >> key;
        cout << hash[key] << endl; //feching in O(1)
    }
    return 0;
}