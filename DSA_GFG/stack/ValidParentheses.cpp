#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    stack <char> ch;
    for(int i = 0; i < n; i++){
        if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
            ch.push(s[i]);
        }
        else{
            if(ch.empty()) {
                cout<<"false";
                return 0;
            }

            char tmp = ch.top();
            ch.pop();
            if(tmp != '{' && s[i]== '}'){
                cout<<"false";
                return 0;
            }
            else if(tmp != '(' && s[i] == ')') {
                cout<<"false";
                return 0;
            }
            else if(tmp != '[' && s[i] == ']') {
                cout<<"false";
                return 0;
            }
        }
    }
    
    if(ch.empty()) cout<<"true";





    return 0;
}