#include <iostream>
#include <string>
using namespace std;
bool checkHello(string s){
    string target = "hello";
    int i = 0;
    for(char c : s){
        if (c == target[i]){
            i++;
        }
        if (i == target.size()){
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    if (checkHello(s)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}