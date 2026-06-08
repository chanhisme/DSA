#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <int, int> cnt;
    long long res = 0;
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    long long s = 0;
    int r = 0;
    int l = 0;
    
    // for(int l = 0; l < n; l++){
    //     while(r < n && s < k){
    //         s += a[r];
    //         r++;
    //     }
    //     if(s >= k){
    //         res += (n-r+1);
    //     }
    //     s -= a[l];
    // }
    // cout<<res;


    for(; r < n; r++){
        s += a[r];
        while(s >= k){
            s -= a[l];
            l++;
        }
        res += (r-l + 1);
    }
    cout<< ( n * (n+1))/2 - res; 


    return 0;
}