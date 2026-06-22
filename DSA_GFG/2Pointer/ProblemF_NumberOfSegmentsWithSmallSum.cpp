#include <iostream>
#include <vector>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, s; cin >> n >> s;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int sum = 0, cnt = 0;
    int l = 0;
    for(int r=0; r < n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        cnt += (r-l+1);
    }
    cout<<cnt;





    return 0;
}