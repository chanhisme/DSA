#include <iostream>
#include <algorithm>
using namespace std;
const long MAX = 1000000;
int a[MAX];
int s[MAX];
int main(){
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }   
    int cnt[n+1] = {0};
    while(q--){
        int l,r; cin >> l >> r;
        l--; r--;
        cnt[l] += 1;
        cnt[r+1] -= 1;

    }
    int f[n];
    f[0] = cnt[0];
    for(int i = 1; i < n; i++){
        f[i] = f[i-1] + cnt[i];
    }
    sort(a, a+n,greater<int>());
    sort(f, f+n, greater<int>());
    long long res = 0;
    for(int i = 0; i < n; i++){
        res += 1LL * a[i]*f[i];
    }
    cout<<res;

    return 0;
}