#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main(){
    stack <int> st;
    int n; cin >> n;
    vector <int> a(n), tmp(n, -1);
    for(int &x : a) cin >> x;
    
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() <= a[i]){
            st.pop();
        }
        if(!st.empty()){
            tmp[i] = st.top();
        }


        st.push(a[i]);
    }
    
    for(int x : tmp){
        cout<<x<<' ';
    }
    









    return 0;
}