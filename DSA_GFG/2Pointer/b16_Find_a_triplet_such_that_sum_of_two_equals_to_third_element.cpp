#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n; cin >> n;
    vector <int> a(n);
    unordered_map<int, int> cnt;
    for(int &x : a){
        cin >> x;
        cnt[x]++;
    }
    int ok =0; 
    // for(int i = 0; i < n; i ++){
    //     for(int j = 0; j < n; j ++){
    //         if(i == j) continue;
    //         int sum = a[i] + a[j];
    //         if(cnt.count(sum)){
    //             if(sum != a[i] && sum != a[j]){
    //                 ok = 1;
    //                 break;
    //             }
    //             else if(cnt[sum] >= 2){
    //                 ok = 1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    
    sort(a.begin(), a.end());
    for(int i = n-1; i >= 0; i--){
        int l = 0, r = n-1 ;
        while(l < r){
            int sum = a[l] + a[r];
            if(l == i){
                l++;
                continue;
            }
            if(r == i){
                r--;
                continue;
            }
            if(sum < a[i]) l ++;
            else if(sum > a[i]) r--;
            else{
                ok = 1;
                break;
            }
            
        }
        if(ok) break;
    }


    if(ok) cout<<"True";
    else cout<<"False";




    return 0;
}