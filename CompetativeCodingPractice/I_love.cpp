#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int more =a[0];
    int less =a[0];
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]>more){
            count++;
            more = a[i];
        }
        else if(a[i]<less){
            less = a[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}