#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void out(queue <int> q){
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue <int> q;
    int n, k;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    if(n < k){
        out(q);
        return 0;
    }
    queue <int> a;
    stack <int> tmp;
    for(int i = 0; i < k; i++){
        tmp.push(q.front());
        q.pop();
    }
    for(int i = k; i < n;i ++){
        a.push(q.front());
        q.pop();
    }
    while(!tmp.empty()){
        q.push(tmp.top());
        tmp.pop();
    }
    while(!a.empty()){
        q.push(a.front());
        a.pop();
    }
   
    out(q);


    return 0;
}