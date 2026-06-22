#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector <int> res;

void solve(stack <int>&a){
    if(!a.empty()){
        res.push_back(a.top());
        a.pop();
        solve(a);
    }
}
int main(){
    int n;
    cin >> n;
    stack <int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }

    solve(a);
    for(int i = 0; i < res.size(); i++){
        a.push(res[i]);
    }
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }

    return 0;
}