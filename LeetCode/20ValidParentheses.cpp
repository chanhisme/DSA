#include <iostream>
#include <stack>
using namespace std;


int main(){
    
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return 0;
            }
            char tmp = st.top();
            st.pop();
            if(s[i] == ')' && tmp != '('){
                cout<<"false";
                return 0;
            } 
            else if(s[i] =='}' && tmp != '{'){
                cout<<"false";
                return 0;
            }
            else if(s[i] == ']' && tmp != '['){
                cout<<"false";
                return 0;
            }

        }
    }
    if(st.empty())cout<<"true";
    








    return 0;
}