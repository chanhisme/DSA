#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, k; cin >> n >> k;
    vector <int> a(n+1);
    unordered_map<int, int> cnt;
    cnt[0] = 1;
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[0] = 0;
    int sum = 0, res = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        if(cnt.count(sum - k)){
            res += cnt[sum - k];
        }
        cnt[sum] ++;
    }
    cout<<res;

    return 0;
}