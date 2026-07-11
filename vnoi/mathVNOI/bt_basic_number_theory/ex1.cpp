// Bài 1: Khởi động với GCD và LCM

// Thời gian giới hạn: 1 giây
// Bộ nhớ: 256 MB

// Đề bài

// Cho T truy vấn. Mỗi truy vấn gồm hai số nguyên dương A và B.

// Hãy tìm:

// Ước chung lớn nhất (GCD) của A và B.
// Bội chung nhỏ nhất (LCM) của A và B.
// Input
// Dòng đầu tiên chứa số nguyên T (1 ≤ T ≤ 10^4).
// T dòng tiếp theo, mỗi dòng chứa hai số nguyên dương A và B.
// Output

// Với mỗi truy vấn, in ra một dòng gồm hai số:

// GCD(A, B) và LCM(A, B)

// cách nhau bởi một dấu cách.

// Giới hạn
// 1 ≤ A, B ≤ 10^6
// Input:
// 2
// 12 18
// 7 5

// Output:
// 6 36
// 1 35
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
long long lcm(int a, int b){
    return 1LL * (abs(a) / gcd(a,b) )* abs(b);
}
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout<<gcd(a,b)<<' '<<lcm(a,b)<<'\n';
    }





    return 0;
}