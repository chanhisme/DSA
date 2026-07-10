#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//little fermat dùng tính nghịch đảo đồng dư khi số M là số nguyên tố

bool isPrime(ll a){
    if(a % 2 == 0) return true;
    if(a < 2) return false;
    for(int i = 3; i*i <= a; i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

ll binaryExponenation(ll a, ll m, ll M){
    ll res = 1;
    while(m){
        if(m & 1){
            res *= a;
            res %= M;
        }
        a *= a;
        a %= M;
        m >>= 1;
    }
    return res;
}

ll fermat(ll a, ll M){
    if(gcd(a, M) != 1) return -1;
    if(isPrime(a)){
        return binaryExponenation(a, M-2, M);
    }
    return -1;

}
#define fast ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
int main(){
    fast;
    
    ll a, M;
    cin >> a >> M;
    cout<<fermat(a, M);





    return 0;
}