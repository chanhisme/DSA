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
    int l = 0, r = 0, minSize = 1e9, sum = 0;
    while(r < n){
        sum += a[r];
        r++;
        while(sum > k){
            if(r-l < minSize) minSize = r-l;
            sum -= a[l];
            l++;
        }
    }
    if(minSize == 1e9) cout<<0;
    else cout<< minSize;





    return 0;
}