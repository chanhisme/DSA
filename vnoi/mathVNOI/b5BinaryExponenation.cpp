#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll binaryExponenation (ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1){
            res *= a;
        }
        a *= a;
        b >>= 1; //b = b dịch bit sang phải 1 bit vdu từ 1101 thành 110
    }
    return res;
}
#define fast ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
int main(){
    fast;
    ll a, b;
    cin >> a >> b;
    cout<< binaryExponenation(a,b);





    return 0;
}