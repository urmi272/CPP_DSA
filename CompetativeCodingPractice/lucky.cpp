#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        string s1= s.substr(0,s.length()/2);
        string s2= s.substr(s.length()/2,s.length());
        int sum1=0,sum2=0;
        for(int i=0;i<s1.length();i++){
            sum1+=s1[i]-'0';
            sum2+=s2[i]-'0';
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}