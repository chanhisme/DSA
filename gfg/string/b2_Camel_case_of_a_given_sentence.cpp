#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    cin.ignore();
    int n = s.length();
    int i = 0;
    string res;
    while(s[i] != '\0'){
        if(s[i] == ' '){
            for(int j = i; j < s.length()-1; j++){
                s[j] = s[j+1];
            }
        s[i] = toupper(s[i]);           
        }
        res.push_back(s[i]);
        i++;
    }
    cout<<res;



    return 0;
}