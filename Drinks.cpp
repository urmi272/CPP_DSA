#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> juice(n);
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin>>juice[i];
        sum += juice[i];
    }
    double result = sum/n;
    cout << result;
    return 0;
}