#include <iostream>
#include <vector>
#include <unordered_map>
using  namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> a(n);
    unordered_map <ll, int> cnt;
    for(int &x : a){
        cin >> x;
        if(x == 0){
            cout<<"true";
            return 0;
        }
    }
    ll sum = 0;
    cnt[0] = -1;
    int ok = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(cnt.count(sum)){
            ok = 1;
        }
        else{
            cnt[sum] = i;
        }
    }
    if(ok) cout<<"true";
    else cout<<"false";







    return 0;
}