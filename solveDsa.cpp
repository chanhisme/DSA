#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    long long sum = 0, cnt = 0;
    int l = 0;
    for(int i = 0; i < n; i++){
        int x = a[i];
        sum += x;
        
        while(sum >= k){
            sum -= a[l];
            l++;
        }
        cnt += (i-l+1);
    }
    cout<<cnt;
    return 0;
}