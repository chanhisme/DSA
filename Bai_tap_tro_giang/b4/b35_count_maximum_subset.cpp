#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int cnt = 0; 
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int l=0, r = n-1;
    while(l < r){
        int diff = a[r] - a[l];
        while(diff > k){
            diff -= a[l];
            l++;
        }

    }



    return 0;
}