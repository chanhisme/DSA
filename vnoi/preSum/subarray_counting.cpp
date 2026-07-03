#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector <long long> a(n+1);
    unordered_map<long long, long long> mp;
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[0] = 0;
    mp[0] = 1;
    long long sum = 0;
    int cnt = 0;
    for(int i = 1; i<=n;i++){
        sum += a[i];
        if(mp.count(sum - k)){
            cnt += mp[sum - k];
        }
        mp[sum] ++;
    }
    cout<<cnt;

    return 0;
}