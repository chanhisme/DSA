// Bài 3: Lũy thừa nhị phân (Binary Exponentiation)

// Thời gian giới hạn: 1 giây
// Bộ nhớ: 256 MB

// Đề bài

// Cho T truy vấn. Mỗi truy vấn gồm ba số nguyên A, B, M.

// Hãy tính:

// A
// B
// modM
// Input
// Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10^5).
// T dòng tiếp theo, mỗi dòng chứa ba số nguyên A, B, M.
// Output
// Với mỗi truy vấn, in ra một dòng là giá trị của:
// A
// B
// modM
// Giới hạn
// 1 ≤ A, B ≤ 10^18
// 1 ≤ M ≤ 10^9 + 7
// Input:
// 2
// 2 10 1000
// 3 1000000000000000000 1000000007

// Output:
// 24
// 126830606
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll bin_ex(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while(b){
        if(b & 1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b >>=1;
    }
    return res;
}
int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        ll a, b, m;
        cin >> a >> b >> m;
        cout<<bin_ex(a,b,m)<<'\n';
    }


    return 0;
}