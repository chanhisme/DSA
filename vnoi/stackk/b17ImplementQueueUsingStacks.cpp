#include <bits/stdc++.h>

using namespace std;

struct Q{
    stack <int> a, b;
    int my_size = 0;
    void move(){
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
    }
    void enqueue(int x){
        a.push(x);
        my_size ++;
    }
    void dequeue(){
        move();
        b.pop();
        my_size--;
    }
    int front(){
        move();
        return b.top();
    }
    int size(){
        return my_size;
    }
    bool empty() {
        return my_size == 0;
    }
};
#define nl '\n'
int main(){
    
    Q q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.enqueue(x);
    }
    
    cout<<q.size()<<nl;
    cout<<q.front()<<nl;
    q.dequeue();
    cout<<q.front()<<nl;
    

}