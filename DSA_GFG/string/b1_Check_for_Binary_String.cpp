#include <iostream>

using namespace std;
int checkDigit(char s){
    int ascii_1 =  '1';
    int ascii_0 = '0';
    int ok = 0;
    if(s == ascii_0 || s == ascii_1){
        ok = 1;
    }
    return ok;
}
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //mainCode
    string s;
    cin >> s;
    cin.ignore();
    int i = 0, isBinary = 1;
    while(s[i] != '\0'){
        if( !checkDigit(s[i])){
            isBinary = 0;
            break;
        }
        i++;
    }
    if(isBinary) cout<<"True";
    else cout<<"False";




    return 0;
}