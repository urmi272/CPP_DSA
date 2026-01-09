#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    int minIndex = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    int swap = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        cout << swap - 1;
    } else {
        cout << swap;
    }

    return 0;
}