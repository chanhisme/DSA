#include <iostream>
#include <stack>

using namespace std;

bool ok(char c){
    if(isdigit(c) || isalpha(c)) return true;

    return false;
}
int main(){
    string s;
    cin >> s;
    stack <string> opr;
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        char c = s[i];
        if(ok(c)){
            opr.push(string(1, c));
        }
        else{
            string opr2 = opr.top(); 
            opr.pop();
            string opr1 = opr.top(); 
            opr.pop();
            string tmp = "(" + opr2 + string(1,c) + opr1 + ")";
            opr.push(tmp);
        }
    }
    cout<<opr.top();
    




    return 0;
}
