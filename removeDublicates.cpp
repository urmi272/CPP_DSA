#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;   // length of unique array
}

int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]); //total memory used by the array/memory used by one element

    int newLength = removeDuplicates(arr, n);

    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
