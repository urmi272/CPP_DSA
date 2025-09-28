#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    while(s.find("WUB")!=string::npos){
        s.replace(s.find("WUB"), 3, " ");
    }
    while (s.find("  ") != string::npos) {
        s.replace(s.find("  "), 2, " ");
    }
    while(s[0]==' ' && !s.empty()){
        s.erase(0,1);
    }
    while (!s.empty() && s[s.size() - 1] == ' ') {
        s.pop_back();
    }

    cout<<s;
    return 0;
}