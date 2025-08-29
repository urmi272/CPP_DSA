#include <iostream>
using namespace std;
int main(){
    /**Number hashing**/
    int n;
    cout<<"Enter size of array: ";
    cin >>n;
    int arr[n];
    cout<<"Enter elements (0-12): ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int hash[13] = {0}; //hash for 0-12 (initially all 0)
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1 ;
    }
    int q;
    cout<<"enter number of queries: ";
    cin >> q;
    while(q--){
        int key;
        cin >> key;
        cout << hash[key] << endl; //feching in O(1)
    }

    //**Charactor hashing**/
    string s;
    cout<<"Enter string: ";
    cin >> s;
    //int hashhh[256]; //hash for all ascii characters (initially garbage values)
    int hashh[26] = {0}; //hash for a-z (initially all 0)
    for(int i=0;i<s.length();i++){
        hashh[s[i]-'a']++; //subtracting ascii value of a to get index 0-25
        //hashhh[s[i]]++; 
    }
    int t;
    cout<<"enter number of queries: ";
    cin>>t;
    while(t--){
        char ch;
        cin >> ch;
        cout << hashh[ch-'a'] << endl; //count of char ch
        //cout << hashhh[ch] << endl; //count of char ch
    }
    return 0;
}