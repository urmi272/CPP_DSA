#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;

vector <int> unionOfArrays(vector<int>& a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> result;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            result.push_back(a[i]);
            i++;
        } else if(a[i] > b[j]){
            result.push_back(b[j]);
            j++;
        } else {
            result.push_back(a[i]); // or b[j], since they are equal
            i++;
            j++;
        }
    }
    while(i < n1){
        result.push_back(a[i]); //add remaining elements of a
        i++;
    }
    while(j < n2){
        result.push_back(b[j]);
        j++;
    }
    return result;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};
    
    vector<int> result = unionOfArrays(a, b);
    
    cout << "Union of arrays: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}