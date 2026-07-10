#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll M = 23;

int main(){
    fast;
    ll n;
    cin >> n;
    vector <ll> a(n+1);
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    unordered_map <ll, ll> cnt;
    for(int i = 7; i <= n; i++){
        cnt[a[i-6] % M]++;
        ans += cnt[a[i] % M];
    }
    cout<<ans;


    return 0;
}