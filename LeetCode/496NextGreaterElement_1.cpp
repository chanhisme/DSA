#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map> 
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    
    vector <int> res;
    stack <int> st;
    unordered_map <int, int> tmp;
    for(int x : b){
        
        while(!st.empty() && st.top() < x){
            tmp[st.top()] = x;
            st.pop();
        }
        st.push(x);
    }
    while(!st.empty()){
        tmp[st.top()] = -1;
        st.pop();
        
    }
    for(int x : a){
        res.push_back(tmp[x]);
    }

    for(int x : res) cout<<x<<' ';






    return 0;
}