#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //maincode
    int n;
    cin >> n;
    vector <int> a(n), pf(n);
    for(int &x : a) cin >> x;
    unordered_map <int, int> cnt;
    pf[0] = a[0];
    for(int i = 1; i < n; i++){
        pf[i] = pf[i-1] + a[i];
    }
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(cnt.count(pf[i]) ){
            ok = 1;
            break;
        }
        else{
            cnt[pf[i]] = i;
        }
    }
    if(ok) cout<<"true";
    else cout<<"false";







    return 0;
}


