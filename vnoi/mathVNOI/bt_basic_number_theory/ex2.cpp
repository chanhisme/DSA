// Bài 2: Đại số Modulo Cơ Bản

// Thời gian giới hạn: 1 giây
// Bộ nhớ: 256 MB

// Đề bài

// Cho ba số nguyên dương A, B, C và một số nguyên M.

// Hãy tính giá trị của biểu thức:

// (A×B+C)modM
// Input
// Một dòng duy nhất chứa 4 số nguyên A, B, C, M.
// Output
// In ra một số nguyên duy nhất là kết quả của biểu thức trên.
// Giới hạn
// 1 ≤ A, B, C ≤ 10^18
// 1 ≤ M ≤ 10^9 + 7
// Input:
// 1000000000 2000000000 5 1000000007

// Output:
// 999999943
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll mod(ll a, ll b, ll c, ll m){
    return (((a % m) * (b % m)) % m + (c % m)) % m;
}
int main(){
    fast;

    ll a, b, c, m;
    cin >> a >> b >> c >> m;   
    cout<<mod(a,b,c,m);




    return 0;
}