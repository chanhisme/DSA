#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //maincode
    int n;
    cin >> n;
    vector <int> a(n), pf(n);
    for(int &x : a) cin >> x;
    pf[0] = a[0];
    for(int i = 1; i < n; i++){
        pf[i] = pf[i-1] + a[i];
    }

    int sum, ok = 0;
    if(pf[n-1] % 2 != 0){
        cout<<"false";
        return 0;
    }
    sum = pf[n-1] /2;
    for(int i = 0; i < n; i++){
        if(sum == pf[i]){
            ok = 1;
            break;
        }
    }
    if(ok) cout<<"true";
    else cout<<"false";
    




    return 0;
}