#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    bool ok = false;
    unordered_map<int,int> cnt;
    for(int i = 2; i < n; i++){
        int target = k - a[i] - a[i-1] - a[i-2];
        if(cnt.count(target)){
            ok = true;
            break;
        }
        cnt[i-2] = a[i-2];
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }





    return 0;
}