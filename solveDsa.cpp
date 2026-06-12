#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main(){
    int n, s;
    cin >> n >> s;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    unordered_map <int, int> cnt;
    pair <int, int> res;
    for(int i = 0; i < n; i++){
        int x = a[i];
        if(cnt.find(s-x) != cnt.end()){
            res.first = cnt[s-x];
            res.second = i;
        }
        cnt[x] = i;
    }
    cout<<res.first<<" "<<res.second;

    return 0;
}