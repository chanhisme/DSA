#include <iostream>
#include <vector>
using namespace std;

#define faster ios::sync_with_stdio(0);cin.tie(0);
int main(){
    faster;
    //main code
    int n, k; cin >> n >> k;
    if(k <= 1){
        cout << 0;
        return 0;
    }
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int prd = 1, res = 0, l = 0;
    for(int r = 0; r < n; r ++){
        prd *= a[r];
        while(prd >= k){
            prd /= a[l];
            l++;
        }
        res += (r-l+1);
    }
    cout<<res;






    return 0;
}