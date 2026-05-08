#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
/////mainCode

    vector<int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int res = abs(a[0] - a[1]);
    int cnt = 1;
    for(int i = 1; i < n-1; i++){
        if(abs(a[i] - a[i+1]) == res){
            cnt++;
        }
        if(abs(a[i]-a[i+1]) < res){
            res =abs(a[i]-a[i+1]);
            cnt=1;
        }
        
    }
    
    cout<<res<<" "<<cnt;


    return 0;
}