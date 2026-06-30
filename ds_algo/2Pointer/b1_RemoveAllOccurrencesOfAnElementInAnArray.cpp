#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n,k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int l =0, r = 0;
    while(r < n){
        if(a[r] != k){
            a[l] = a[r];
            l++;
        }
        r++;
    }
    cout<<l;
    // for(int i = 0; i < l; i++){
    //     cout<<a[i]<<' ';
    // }





    return 0;
}