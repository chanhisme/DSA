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
    int sum = 0, l = 0;
    int minLen = n+1;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            int currLen = r-l+1;
            
            sum -= a[l];
            l++;
            if(currLen < minLen)minLen = currLen;
            
        }
    }
    if(minLen == n+1) cout<<-1;
    else cout<<minLen;










    return 0;
}