#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    unordered_set <int> s (a.begin(), a.end());
    int res = 0, len;
    for(int i = 0; i < n; i++){
        if(s.find(a[i] - 1) == s.end()){
            len = 1;
            while(s.find(a[i] + len) != s.end()){
                len++;
            }
            res = max(res, len);
        }
    }
    cout<<res;




    return 0;
}