#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> a(n, 0), pfs(n);
    for(int x : a) cout<<x<< ' ';
    cout<<endl;
    a[1]++;
    a[7]--;
    pfs[0] = a[0];
    for(int i = 1; i < n; i++){
        pfs[i] = pfs[i-1] + a[i];
    }
    for(int x : pfs) cout<<x<<" ";

}
