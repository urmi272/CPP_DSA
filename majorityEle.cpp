#include<iostream>
//#include<map>
#include<vector>
using namespace std;

// int majEle(vector<int> nums){
//     map <int, int> mp;
//     for(int i=0; i<nums.size(); i++){
//         mp[nums[i]]++;
//         if(mp[nums[i]] > nums.size()/2){
//             return nums[i];
//         }
//     }
//     return -1;
// }

//optimal approach (Boyer-Moore Voting Algorithm) //if the majority element is always present >n/2
int majEle(vector<int> nums){
    int cnt = 0;
    int ele;
    for(int i=0; i<nums.size(); i++){
        if(cnt == 0){
            ele = nums[i];
            cnt = 1;
        }
        if(nums[i] == ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    return ele;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2,3,2};
    int count = 0;
    for (int num : nums) {
        if (num == majEle(nums)) {
            count++;
        }
    }
    if(count > nums.size()/2){
        cout << "Majority Element is: " << majEle(nums) << endl;
    } 
    else {
        cout << "No majority element found." << endl;
    }
    return 0;
}