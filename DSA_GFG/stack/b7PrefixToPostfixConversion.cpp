#include <iostream>
#include <stack>
using namespace std;

bool ok (char c){
    if(isdigit(c) || isalpha(c)){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    stack <string> st;
    int n = s.size();
    
    for(int i = n-1; i >= 0; i--){
        char c  = s[i];
        if(ok(c)){
            st.push(string(1, c));
        } 
        else{
            string opr2 = st.top();
            st.pop();
            string opr1 = st.top();
            st.pop();
            string tmp = opr2 + opr1 + string(1, c);
            st.push(tmp);
        }
    }
    
    cout<<st.top();



    return 0;
}