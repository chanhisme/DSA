#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n), c(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int i = 0; i < n; i++){
        c[i] = a[i] - b[i];
    }
    for(int i = 1; i < n; i++){
        c[i] += c[i-1];
    }
    unordered_map <int, int> cnt;
    int res = 0;
    for(int i  = 0; i < n; i++){
        if(c[i] == 0){
            res = i + 1;
        }
        if(cnt.count(c[i])){
            res = max(res, i - cnt[c[i]] );
        }
        else{
            cnt[c[i]] = i;
        }

    }
    cout<<res;



    return 0;
}