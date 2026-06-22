#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int ranking(char ch){
    if (ch == '^')return 3;
    else if (ch == '*' || ch == '/')return 2;
    else if (ch == '+' || ch == '-')return 1;
    return -1;
}
bool isVar(char c){
    if (isdigit(c) || isalpha(c)){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    stack<string> st;
    int n = s.size();
    for (int i = 0; i < n; i++){
        char c = s[i];
        if(isVar(c)){
            st.push(string(1, c));
        }
        else{
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            string str = '(' + op1 + ' ' + c + ' ' + op2 + ')';
            st.push(str);
        
        }
    }
    
cout<<st.top();

    return 0;
}