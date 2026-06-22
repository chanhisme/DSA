#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin, s);
    int n = s.size();
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' '){
            for(int j = i; j < n-1; j++){
                s[j] = s[j+1];
            }
            s[i] = toupper(s[i]);
            n--;
        }
        i++;
    }
    
    for(int i = 0; i < n; i++){
        cout<<s[i];
    }






    return 0;
}