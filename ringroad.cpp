#include <iostream>
using namespace std;
int main(){
    long long n, m;
    cin>>n>>m;
    long long count = 0;
    int current = 1;
    
    for(int i=0; i<m; i++){
        int task;
        cin>>task;
        if(task>=current){
            count += task - current;
        }
        else{
            count += n - current + task;
        }
        current = task;
    }
    cout<<count;
    return 0;
}