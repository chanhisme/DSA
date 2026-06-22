#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, m, k; cin >> n >> m >> k;
    vector <int> a(n);
    vector <int> b(m);
    pair<int, int> res;
    int minDiff = 1e9;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(b.begin(), b.end());
    int pa = 0, pb=0;
    while(pa < n){
        int l = 0, r = b.size() - 1;
        int target = k - a[pa];
        while(l <= r){
            int mid = l + (r-l) / 2;
            int diff = abs(target - b[mid]);
            if(diff < minDiff){
                minDiff = diff;
                res={a[pa], b[mid]};
            }
            if(target > b[mid]){
                l = mid+1;
            }
            else if(target < b[mid]){
                r = mid - 1;
            }
            else{
                break;
            }
        }
        pa++;
    }
    cout<<res.first<<' '<<res.second;






    return 0;
}