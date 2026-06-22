#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool ok(char c){
    if(isdigit(c) || isalpha(c)){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    stack <string> st;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(ok(c)){
            st.push(string(1, c));
        }
        else{
            string opr2 = st.top();
            st.pop();
            string opr1 = st.top();
            st.pop();
            string tmp = string(1, c) + opr1 + opr2;
            st.push(tmp);
        }
    }
    cout<<st.top();






    return 0;
}