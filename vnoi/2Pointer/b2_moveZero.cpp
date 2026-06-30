#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n; cin >> n;
    vector<int> a(n);
    for(int &x: a) cin >> x;
    int l=0, r=0;
    while(r < n){
        if(a[r] != 0){
            a[l] = a[r];
            l++;
        }
        r++;
    }
    for(int i = l; i < n; i++){
        a[i] = 0;
    }
    for(int i =0; i < n; i++){
        cout<<a[i]<<' ';
    }




    return 0;
}