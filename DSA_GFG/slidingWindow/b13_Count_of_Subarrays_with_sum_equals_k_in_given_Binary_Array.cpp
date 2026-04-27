#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define faster ios::sync_with_stdio(0); cin.tie(0);

long long count(vector<int> &a, int n, int k){
    if(k < 0) return 0;
    int l = 0, s = 0, res = 0;
    for(int r = 0; r < n; r ++){
        s += a[r];
        while(s > k){
            s -= a[l];
            l++;
        }
        res += (r-l+1);
    }
    return res;
}
int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    cout<<count(a, n, k) - count(a, n, k-1);





    return 0;
}