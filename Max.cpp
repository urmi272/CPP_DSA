#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>> a>> b>>c;
    int maxValue = max(max(a + b + c, a + b * c), max(a * b + c, a * b * c));
    maxValue = max(maxValue, (a + b) * c);
    maxValue = max(maxValue, a * (b + c));

    cout << maxValue << endl;

    return 0;
}