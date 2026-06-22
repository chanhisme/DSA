#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n; cin >> n;
    int m; cin >> m;
    vector <int> a;
    vector <int> b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    auto i = a.begin(), j = b.begin();
    while(i != a.end() && j != b.end() ){
        if(*i < *j){
            i++;
        }
        else if(*j < *i){
            j++;
        }
        else{
            cout<<*i<<" ";
            j++;
            i++;
        }
    }

    cout<<endl;

    
    auto p = a.begin(), k = b.begin();
    while(p != a.end() && k != b.end()){
        if(*p < *k){
            cout<<*p<<" ";
            p++;
        }
        else if(*k < *p){
            cout<<*k<<" ";
            k++;
        }
        else{
            cout<<*p<<" ";
            k++; p++;
        }
    }
    while(p != a.end()){
        cout<<*p<<" ";
        p++;
    }

    while( k != b.end()){
        cout<<*k<<" ";
        k++;
    }

    return 0;
}