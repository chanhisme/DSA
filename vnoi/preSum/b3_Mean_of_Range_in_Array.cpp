#include <iostream>
#include <vector>

#define foi(i,l,r) for(int i = l; i < r; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    faster;
    //main ccode
    int n, q; cin >> n >> q;
    vector <int> a(n), pf(n);
    foi(i, 0, n){
        cin >> a[i];
    }
    pf[0] = a[0];
    foi(i, 1, n){
        pf[i] = pf[i-1] + a[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == 0){
            cout<<pf[r]/(r-l+1)<<' ';
        }
        else{
            cout<<(pf[r] - pf[l-1]) / (r-l+1)<<' ';
        }
    }


    return 0;
}