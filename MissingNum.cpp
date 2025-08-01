#include <iostream>
#include <vector>
using namespace std;

    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     int total = (n * (n + 1)) / 2; // Sum of first n natural numbers
    //     int sum = 0;

    //     for (int num : nums) { //int num declares a variable num that will take on the value of each element in the array or vector. where nums is the range
    //         sum += num;
    //     }
    //     return total - sum; // The missing number
    // }

    int missingNum(vector<int> &nums){
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            result ^= nums[i] ^ i; // XOR operation to find the missing number
        }
        return result;
    }

    int main()
    {
        vector<int> nums = {0, 1, 2, 4, 5}; // Example input
        cout << "The missing number is: " << missingNum(nums) << endl;
        return 0;
    }