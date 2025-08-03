#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &nums, int k){
    int left = 0, right = 0, maxLength = 0, sum = nums[0];
    int n = nums.size();
    while(right<n){
        while(sum > k && left <= right){
            sum -= nums[left];
            left++;
        }
        if(sum == k) {
            maxLength = max(maxLength, right - left + 1);
        }
        right++;
        sum += nums[right];

    }
    return maxLength;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 4, 2, 2, 1, 5};
    int k = 8;
    cout << "Length of longest subarray with sum = " << k << ": " << longestSubarray(nums, k) << endl;
    return 0;
}