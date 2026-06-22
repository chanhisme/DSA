#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector <int> a(n), pfs(n);
    unordered_map <int, int> cnt;
    cnt[0] = 1; 
    for(int &x : a) cin >> x;
    pfs[0] = a[0];
    for(int i = 1; i < n; i++){
        pfs[i] = pfs[i-1] + a[i];
    }
    int res = 0;
    for(int i  = 0; i < n; i ++){
        int target = pfs[i] - k;
        res += cnt[target];
        cnt[pfs[i]]++;
    }
    cout<<res;






    return 0;
}