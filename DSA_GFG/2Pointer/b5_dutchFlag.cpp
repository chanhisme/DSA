#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int l = 0, r = n - 1, m = 0;
    while(m <= r){
        if(a[m] == 0){
            swap(a[l], a[m]);
            m++;
            l++;
        }
        else if(a[m] == 1){
            m ++;
        }
        else if(a[m] == 2){
            swap(a[m], a[r]);
            r--;
        }
    }   
    for(int x: a) cout<<x<<' ';





    return 0;
}