#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> body(3);
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        body[0] += x;
        body[1] += y;
        body[2] += z;
    }
    if(body[0] == 0 && body[1] == 0 && body[2] == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}