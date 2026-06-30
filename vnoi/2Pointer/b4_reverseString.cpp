#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string s; 
    getline(cin, s);
    int l = 0, r = s.length()-1;
    while(l < r){
        if(s[l] == ' '){
            l++;
            continue;
        }
        else if(s[r] == ' '){
            r--;
            continue;
        }
        else{
            char temp = s[r];
            s[r] = s[l];
            s[l] = temp;
            l++; r--;
        }
    }
    cout<<s;



    return 0;
}