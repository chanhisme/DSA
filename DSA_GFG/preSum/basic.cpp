#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <long long> a(n), prefix(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    prefix[0] = a[0];
    for(int i = 1; i < n; i ++){
        prefix[i] = prefix[i-1] + a[i];
    }
    for(int x : prefix) cout<< x<<' ';
    cout<<endl;
    int l, r;
    
    cin >> l >> r;
    cout<<prefix[r] - prefix[l-1];

    return 0;
}