#include <bits/stdc++.h>

using namespace std;

void solve(queue <int> &q, int k){
    stack <int> st;
    queue <int> res;

    for(int i = 0; i < k; i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        res.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        res.push(q.front());
        q.pop();
    }
    swap(q, res);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int k, n;
    cin >> n >> k;
    queue <int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    solve(q, k);
    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    






    return 0;
}