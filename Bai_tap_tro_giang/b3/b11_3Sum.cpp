#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //
    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    bool ok = false;
    unordered_map<int,int> cnt;
    for(int i = 1; i < n; i++){
        int target = k - a[i] - a[i-1];
        if(cnt.count(target)){
            ok = true;
            break;
        }
        cnt[i-1] = a[i-1];
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }




    return 0;
}