#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    long long k;
    cin>>n>>k;
    vector <long long> evens, odds, rearranged;
    for(int i=1; i<= n; i++){
        if(i%2==0){
            evens.push_back(i);
        }
        else odds.push_back(i);
    }
    rearranged.insert(rearranged.end(), odds.begin(), odds.end());
    rearranged.insert(rearranged.end(), evens.begin(), evens.end());

    cout<<rearranged[k-1];
    return 0;
}

//for less memory 

// #include <iostream>
// using namespace std;
// int main() {
//     long long n, k;
//     cin >> n >> k;
//     long long odds = (n + 1) / 2;
//     if (k <= odds) {
//         cout << 2 * k - 1;
//     } else {
//         cout << 2 * (k - odds);
//     }
//     return 0;
// }
