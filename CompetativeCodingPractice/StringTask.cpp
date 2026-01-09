#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    cin >> str;
    string vowels = "aeiouyAEIOUY";
    for(int i = 0; i < str.size(); i++){
        bool isVowel = false;
        for (char vowel : vowels) {
            if(str[i] == vowel){ 
                isVowel = true;
                break;
            }
        }
        if (!isVowel){
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = tolower(str[i]);
            }
            cout << "." << str[i];
        }
    }
    return 0;
}

