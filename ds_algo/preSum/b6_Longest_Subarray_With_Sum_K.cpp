#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define foi(i, l, r) for(int i = l; i < r; i++)
#define fod(i, l ,r) for(int i = r; i > l; i--)
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    int n, k;
    cin >> n >> k;
    vector<long long>a(n), pf(n);
    unordered_map <long long, int> cnt;
    int res = 0;
    foi(i, 0, n){
        cin >> a[i];
    }
    pf[0] = a[0];
    foi(i, 1, n){
        pf[i] = pf[i-1] + a[i];
    }
    cnt[0] = -1;
    long long sum = 0;
    foi(i, 0, n){
        sum += a[i];
        if(cnt.count(sum - k)){
            res = max(res, i - cnt[sum -k]);
        }
        if(!cnt.count(sum)){
            cnt[sum] = i;
        }
        
    }
    cout<<res<<endl;
    foi(i, 0, n){
        cout<<pf[i]<<' ';
    }


    return 0;
}