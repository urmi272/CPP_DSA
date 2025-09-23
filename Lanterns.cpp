#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long l;
    cin >> l;
    double maxd = 0.0;
    vector<long long> a(n);
    for(int i = 0; i< n; i++){
        cin>> a[i];
    }
    sort(a.begin(), a.end());
    maxd = max(maxd, (double)a[0]);
    for (int i = 0; i < n - 1; i++) {
        double distance = (a[i + 1] - a[i]) / 2.0;
        maxd = max(maxd, distance);
    }
    maxd = max(maxd, (double)(l - a[n-1]));  
    printf("%.10f\n", maxd);
    return 0;
}