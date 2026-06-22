#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    unordered_map<int, int> cnt;
    for(int &x : a){
        cin >> x;
        cnt[x]++;
    }
    int ok = 0;
    // for(int i = 0; i < n; i++){
    //     int target = k - a[i];
    //     if(cnt.count(target)){
    //         if(target != a[i] || cnt[a[i]] >= 2){
    //             ok = 1;
    //             break;
    //         }
    //     }
    // }
    int l = 0, r = n - 1;
    sort(a.begin(), a.end());
    while( l < r){
        int s = a[l] + a[r];
        if(s > k){
            r--;
        }
        else if(s < k){
            l++;
        }
        else{
            ok = 1;
            break;
        }
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    




    return 0;
}