#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    // // two pointer ko xài dc số âm
    // int n, k; cin >> n >> k;
    // vector<int> a(n);
    // for(int &x : a) cin >> x;
    // int l = 0, r = 0;
    // long sum = 0;
    // int size = n+1;
    // while(r < n){
    //     sum += a[r];
    //     r++;
    //     while(sum > k){
    //         sum -= a[l];
    //         l++;
    //     }
    //     if(sum == k) size = min(size, r-l);
        
    // }
    // if(size != n+1) cout<<size;
    // else cout<<-1;

    //preFix Sum
    int n, k; cin >> n >> k;
    vector<int> a(n);
    // map <long long, int> mp;
    unordered_map <long long, int> mp;
    mp[0] = -1;
    long long sum = 0;
    for(int &x : a) cin >> x;
    int res = 1e9;
    for(int i = 0; i < n; i++){
        sum += a[i];

        if(mp.count(sum - k)){
            res = min(res, i - mp[sum - k]);
        }
        mp[sum] = i;
    }
    
    if(res == 1e9) cout<<-1;
    else cout<<res;
    return 0;
}