#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //main code
    int n, k; cin >> n >> k;
    vector <int> a(n);
    int sum = 0;
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    int cnt = 0, target = sum - k;
    if(target < 0){
        cout<<-1;
        return 0;
    }
    else if(target == 0){
        cout<<n;
        return 0;
    }

    
    int l = 0, win = 0, res = -1;
    for(int r = 0; r < n; r++){
        win +=  a[r];
        while(win > target){
            win -= a[l];
            l++;
        }
        if(win == target) res = max(res, (r-l+1));
    }
    if(res == -1) cout << -1;
    else cout << n - res;




    return 0;
}