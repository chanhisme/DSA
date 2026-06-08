#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;

    unordered_map <int, int> cnt;
    cnt[0]++;
    vector <int> pfs(n);
    pfs[0] = a[0];
    for(int i = 1; i < n; i++){
        pfs[i]= pfs[i-1] + a[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        int x = pfs[i];
        if(cnt.count(x - k)){
            res += cnt[x-k];
        }
        cnt[x]++;
    }
    cout<<res;



    return 0;
}