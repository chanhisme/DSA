#include <iostream>
#include <vector>

using namespace std;
#define foi(i, l, r) for(int i = l; i < r; i++)
#define fod(i, l, r) for(int i = r; i >= l; i--)
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //main code
    int res = -1;
    int n; cin >> n;
    vector <int> a(n), pf(n), sf(n);
    foi(i, 0, n){
        cin >> a[i];
    }
    pf[0] = a[0];
    sf[n-1] = a[n-1];
    foi(i, 1, n){
        pf[i] = pf[i-1] + a[i];
    } 

    fod(i,0, n-2){
        sf[i] = sf[i+1] + a[i];
    }
    foi(i, 0, n){
        if(sf[i] == pf[i]){
            res = i;
            break;
        }
    }
    cout<<res;









    return 0;
}