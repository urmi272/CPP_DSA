#include <iostream>
#include <set>
using namespace std;
bool DistinctDigits(int year){
    set<int> digits;
    while(year>0){
        int digit = year%10;
        if(digits.find(digit) != digits.end()){
            return false;
        }
        digits.insert(digit);
        year/=10;
    }
    return true;
}
int main() {
    int y;
    cin >> y;
    y++;
    while (!DistinctDigits(y)) {
        y++;
    }
    cout << y << endl;
    return 0;
}

