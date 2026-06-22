#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.begin() + (n/2));
    sort(a.begin()+n/2, a.end());

    int l = 0, r = n/2;
    int cnt = 0;
    while(l < n/2 && r < n){
        if(a[l] < 5 * a[r]){
            l ++;
        }
        else{
            cnt += (n/2 - l);
            r++;
        }
    }
    
    cout<<cnt;




    return 0;
}