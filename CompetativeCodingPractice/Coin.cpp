#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> coins(n);
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int pickedSum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        pickedSum += coins[i];
        count++;
        if (pickedSum > (totalSum - pickedSum)) {
            break;
        }
    }

    cout << count << endl;
    return 0;

}