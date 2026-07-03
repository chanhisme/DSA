#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);

int main(){
    faster;
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m),res;
    for(int &x : a) cin >> x;
    for(int &x : b) cin>> x;
    int pa = 0, pb = 0;
    while(pa < n && pb < m){
        int val;
        if(a[pa] < b[pb]){
            val = a[pa];
            pa++;
        }
        else if(b[pb] < a[pa]){
            val = b[pb];
            pb++;
        }
        else{
            val = a[pa];
            pa++; pb++;
        }
        if(res.empty() || res.back() != val){
            res.push_back(val);
        }
    }
    while(pa < n){
        if(res.empty() || res.back() != a[pa]){
            res.push_back(a[pa]);
        }
        pa++;
    }
    while(pb < m){
        if(res.empty() || res.back() != b[pb]){
            res.push_back(b[pb]);
        }
        pb++;
    }
    for(int i : res) cout<<i<<" ";


    return 0;
}