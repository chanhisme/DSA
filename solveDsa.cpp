#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    if(k == 0){
        cout<<0;
        return 0;
    }
    vector <int>a(n);
    for(int &x : a) cin >> x;
    long long p = 1;
    int cnt = 0;
    int l = 0;
    for(int i = 0; i < n; i++){
        p *= a[i];
        while(p >= k){
            p /= a[l];
            l++;
        }
        cnt += (i-l+1);
    }
    cout<<cnt;
    return 0;
}