#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    vector<int> preSum(a.size());
    preSum[0] = a[0];
    for(int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        l--;
        r--;
        if(l == 0){
            cout<<preSum[r]<<endl;
        }
        else{
            cout<<preSum[r] - preSum[l-1]<<endl;
        }
    }



    return 0;
}