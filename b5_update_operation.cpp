#include <iostream>
using namespace std;

const long MAX = 1000000;
int a[MAX];
int d[MAX];
int s[MAX];
int main(){
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    d[0] = a[0];
    for(int i = 1; i < n; i++){
        d[i] = a[i] - a[i-1];
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        a[l] += k;
        a[r+1] -=k;
    }
    s[0] = d[0];
    for(int i = 0; i < n; i++){
        s[i] = s[i-1] + d[i]; 
    }
    for(int i = 0; i < n; i ++){
        cout<<s[i]<<" ";
    }





    return 0;
}