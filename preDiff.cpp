#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int d[n];
    d[0] = a[0];
    for(int i = 1; i < n; i++){
        d[i] = a[i] - a[i-1];
    }
    
    for(int i = 0; i < n; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

    int l, r, k;
    cin >> l >> r >> k;
    d[l] += k;
    if(r+1 < n){
        d[r+1] -=k;
    }

    for(int i = 0; i < n; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    
    int s[n];
    s[0] = d[0]; //Sum lại của preDiff là thành giá trị ban đầu
    for(int i = 1; i < n;i ++){
        s[i] = d[i] + s[i-1];
    }
    for(int i = 0; i < n; i++){
        cout<<s[i]<<" ";
    }





    return 0;
}