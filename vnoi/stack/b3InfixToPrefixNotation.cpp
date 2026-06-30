#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int prio(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if( c== '+' || c == '-') return 1;
    else return 0;
}
bool isVar(char c){
    if(isdigit(c) || isalpha(c)){
        return true;
    }
    return false;
}
int main(){
    stack <char> st;
    string res = "";
    string s;
    cin >> s;
    int n = s.size();
    for(int i = n-1; i >= 0 ; i--){
        char c = s[i];
        if(isVar(c)){
            res += c;
        }
        else if(c == ')' ){
            st.push(c);
        }
        else if(c == '(' ){
            while(!st.empty() && st.top() != ')'){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() &&
                (prio(c) < prio(st.top()) ||
                (prio(c) == prio (st.top()) && c == '^' ))){
                    res += st.top();
                    st.pop();

            }
            st.push(c);
        }
        

    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout<<res;
    





    return 0;
}