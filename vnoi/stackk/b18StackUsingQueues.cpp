#include <bits/stdc++.h>

using namespace std;

struct myStack{
    queue <int> q, tmp;
    void push(int x){
        q.push(x);
        while(!tmp.empty()){
            q.push(tmp.front());
            tmp.pop();
        }
        swap(tmp, q);
    }
    
    int top(){
        return tmp.front();
        
    }
    void pop(){
        if(tmp.empty()){
            return;
        }
        tmp.pop();
        
    }

    int size(){
        return tmp.size();
    }
    bool empty(){
        if(tmp.size() > 0) return false;
        return true;
    }

};
int main(){
    myStack st;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    





    return 0;
}