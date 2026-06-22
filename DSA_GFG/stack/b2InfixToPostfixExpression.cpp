    #include <iostream>
    #include <stack>
    #include <ctype.h>
    using namespace std;

    bool validVar(char ch){
        if(isalpha(ch) || isdigit(ch)){
            return true;
        }
        return false;
    }

    int prio(char ch){
        if(ch == '^') return 3;
        else if(ch == '*' || ch == '/') return 2;
        else if(ch == '+' || ch == '-') return 1;
        return -1;
    }

    int main(){
        string res = "";
        stack <char> op;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(validVar(s[i])){
                res += s[i];
            }
            else if(s[i] == '('){
                op.push('(');
            }
            else if(s[i] == ')'){
                while(!op.empty() && op.top() != '('){
                    res += op.top();
                    op.pop();
                }
                if(!op.empty()){
                    op.pop();
                }
            }
            else{
                while(!op.empty() && 
                    op.top() != '(' && 
                    (
                        prio(op.top()) > prio(s[i]) || 
                    (
                        s[i] != '^' && 
                        prio(op.top()) == prio(s[i])
                            )
                        )
                    ){
                    
                    res += op.top();
                    op.pop();
                }
                op.push(s[i]);
            }
        }
        while(!op.empty()){
            res += op.top();
            op.pop();
        }
        cout<<res;
        





        return 0;
    }