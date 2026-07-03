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
    int l = 0; long long sum =0;
    long long cnt = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            if(sum >= s) cnt += (n-r); //full là 1 + n - 1 - r rút gọn
            sum -=a[l];
            l++;
        }
        
    }
    cout<<cnt;


    return 0;
}