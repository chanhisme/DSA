#include <bits/stdc++.h>
using namespace std;
long long ext_gcd(long long a, long long b,
                  long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    long long x1, y1;
    long long g = ext_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}
long long modInverse(long long a, long long m) {
    long long x, y;
    long long g = ext_gcd(a, m, x, y);

    if (g != 1) return -1; // không tồn tại

    return (x % m + m) % m;
}
int main(){
    cout << modInverse(3, 11);




    return 0;
}