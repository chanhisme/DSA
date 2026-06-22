#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n), mod(n);
    unordered_map <int, int> cnt;
    for(int &x : a) cin >> x;
    cnt[0] = 1;
    mod[0] = a[0] % k;
    if(mod[0] < 0) mod[0] += k;
    for(int i = 1; i < n; i++){
        mod[i] = (mod[i-1] + a[i]) % k;
        if(mod[i] < 0) mod[i] += k;
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        res += cnt[mod[i]];
        cnt[mod[i]] ++;
    }
    cout<<res;











    return 0;   
}