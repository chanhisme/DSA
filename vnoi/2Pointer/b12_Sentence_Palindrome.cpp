#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    string s;
    getline(cin, s);
    int l = 0, r = s.length() - 1;
    int ok = 1;
    while(l < r){
        while(l < r && !isalnum(tolower(s[l]))) l++;
        while(l < r && !isalnum(tolower(s[r]))) r --;
        if(tolower(s[l]) != tolower(s[r])){
            ok = 0;
            break;
        }
        l++; r--;
        
    }
    if(ok) cout<<"true";
    else cout<<"false";

    return 0;
}