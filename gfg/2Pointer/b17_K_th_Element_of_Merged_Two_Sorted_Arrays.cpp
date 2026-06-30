#include <iostream>
#include <vector>
using namespace std;

#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    int n, m, k;
    cin >> n >> m >> k;
    k--;
    vector <int> a(n), b(m), res;
    for(int &x : a)cin >> x;
    for(int &x : b)cin >> x;
    int pa = 0, pb =0;
    while(pa < n && pb < m){
        if(a[pa] < b[pb]){
            res.push_back(a[pa]);
            pa++;
        }
        else if(b[pb] < a[pa]){
            res.push_back(b[pb]);
            pb++;
        }
        else{
            res.push_back(a[pa]);
            res.push_back(b[pb]);
            pa++;pb++;
        }
    }
    while(pa < n){
        res.push_back(a[pa]);
        pa++;
    }
    while(pb < m){
        res.push_back(b[pb]);
        pb++;
    }
    cout<<res[k];
    




    return 0;
}