#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> numbers;
    for (char c : s) {
        if (c >= '1' && c <= '3') {
            numbers.push_back(c - '0');
        }
    }
    
    sort(numbers.begin(), numbers.end());
    
    string result = "";
    for (int i = 0; i < numbers.size(); ++i) {
        result += to_string(numbers[i]);
        if (i < numbers.size() - 1) {
            result += "+";
        }
    }
    cout << result <<endl;
    return 0;
}