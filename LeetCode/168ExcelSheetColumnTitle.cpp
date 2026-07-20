#include <bits/stdc++.h>
using namespace std;
string res = "";
string convert(int n) {
    while (n != 0) {
        --n;
        int tmp = n % 26;
        res.push_back('A' + tmp);
        n /= 26;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    int n;
    cin >> n;
    cout << convert(n);

    return 0;
}