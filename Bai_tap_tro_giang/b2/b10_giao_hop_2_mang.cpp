#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    vector <int> b(m);
    for(int &x : b){
        cin >> x;
    }
    set <int> c;
    for(int x : a){
        c.insert(x);
    }
    set<int> d;
    for(int x : b){
        d.insert(x);
    }
    auto i = c.begin(), j = d.begin();
    while(i != c.end() && j != d.end()){
        if(*i == *j){
            cout<<*i<<" ";
            i ++; j ++;
        }
        else if(*i < *j){
            i++;
        }
        else{
            j++;
        }
    
    }
    cout<<endl;
    auto p = c.begin(), k = d.begin();
    while(p != c.end() && k != d.end()){
        if(*p < *k){
            cout<<*p<<" ";
            p++;
        }
        else if(*k < *p){
            cout<<*k<<" ";
            k++;
        }
        else{
            cout<<*k<<" ";
            k++; p++;
        }
    }
    while(p != c.end()){
        cout<<*p<<" ";
        p++;
    }
    while(k != d.end()){
        cout<<*k<<" ";
        k++;
    }


    return 0;
}