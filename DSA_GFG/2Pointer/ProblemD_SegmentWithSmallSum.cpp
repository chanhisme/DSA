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
    int l = 0;
    int maxLen = -1;
    int sum = 0;
    for(int r = 0; r < n; r ++){
        sum += a[r];
        while( sum > s){
            sum -= a[l];
            l++;
        }
        int currLen = (r-l+1);
        if(currLen > maxLen) maxLen = currLen;
    }
    if(maxLen != -1 && maxLen != 0){
        cout<<maxLen;
    }
    else{
        cout<<-1;
    }
    



    return 0;
}