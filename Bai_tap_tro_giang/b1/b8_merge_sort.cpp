#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int m; cin >> m;
    vector <int> b(m);
    for(int &x : b){
        cin >> x;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ia = 0;
    int jb = 0;
    while(ia < n && jb < m){
        if(a[ia] < b[jb]){
            cout<<a[ia]<<" ";
            ia++;
        }
        else if(b[jb] < a[ia]){
            cout<<b[jb]<<" ";
            jb++;
        }
        else{
            cout<<a[ia]<<" "<<b[jb]<<" ";
            ia++;jb++;
        }
    }
    while(ia < n){
        cout<<a[ia]<<" ";
        ia++;
    }
    while(jb < m){
        cout<<b[jb]<<" ";
        jb++;
    }




    return 0;
}