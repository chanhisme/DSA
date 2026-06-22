#include <iostream>
#include <stack>
#include <vector>
#include <cstring>
#include <cmath>
using namespace std;

int myDigit(string s){
    if(s.empty()) return 0;
    int i = 0;
    if(s[0] == '-'){
        if(s.size() == 1) return false;
        i = 1;
    }
    for(; i < s.size(); i++){
        if(!isdigit(s[i])){
            return 0;
        }
    }
    return 1;
}
int main(){
    stack <int> st;
    int n;
    cin >> n;
    vector <string> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        if(myDigit (s[i])){
            st.push(stoi(s[i]));
        }
        else{ //if this string is operator
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(s[i] == "+") st.push(b+a);
            else if(s[i] == "-") st.push(b-a);
            else if(s[i] == "*") st.push(b*a);
            else if(s[i] == "/") st.push(floor(b/(float)a));
            else if(s[i] == "^") st.push((int)pow(b,a));
        }
    }
    cout<<st.top();


    return 0;
}