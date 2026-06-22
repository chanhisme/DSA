#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(int &x : b) cin >> x;
    sort(b.begin(), b.end());
    int pa = 0, pb = 0;
    while( pa < n && pb < m){
        if(a[pa] < b[pb]) pa++;
        else if(b[pb] < a[pa]) pb++;
        else{
            cout<<a[pa]<<' ';
            pa++;
            pb++;
        }
    }







    return 0;
}