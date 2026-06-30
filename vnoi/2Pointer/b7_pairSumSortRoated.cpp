#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int l = 0, r = 0;
    int ok = false;
    int pivot= n-1;
    for(int i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            pivot = i-1;
            break;
        }
    }
    r = pivot;
    l = (pivot+1) % n;
    while(l != r){
        int s = a[l] + a[r];
        if(s > k){
            r = (n+r-1) % n;
        }
        else if(s < k){
            l = (l + 1)%n;
        }
        else{
            ok = true;
            break;
        }
    }
    if(ok) cout<<"true";
    else cout<<"false";

    return 0;
}