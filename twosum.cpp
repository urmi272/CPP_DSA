#include<iostream>
#include <vector>
using namespace std;
vector<int> twosum(vector<int> &num, int target){
    for(int i =0; i<num.size(); i++){
        for(int j = i+1; j<num.size(); j++){
            if(num[i]+ num[j] == target){
                return {i, j};
            }
        }
    }
    return {}; // return empty vector if no solution found
}
int main(){
    vector<int> nums = {1,5,6,2,5,4,8,3,7};
    int target = 9;
    vector<int>result = twosum(nums, target); //storing result in a vector
    if(!result.empty()){ 
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}