#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);



ll C(ll n, ll k){
    if(k > n-k) k = n-k;
    ll res = 1;
    for(int i = 1; i <= k; i++){
        res *= (n-k + i); //nhân trước chia sau
        res /= i;
    }
    return res;
}
int main(){
    fast;
    ll n, k;
    cin >> n >> k;
    cout<<C(n, k);




    return 0;
}