#include <iostream>
#include <stack>
#include <vector>


using namespace std;


int main(){
    int n; cin>> n;
    vector <int> a(n), res(n, -1);
    for(int &x : a) cin >> x;
    stack <int> st;
    for(int i = 0; i < n; i++){
        
        while(!st.empty() && st.top() >= a[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i] = st.top();
        }

        st.push(a[i]);
    }
    for(int x : res) cout<<x<<' ';


    return 0;
}