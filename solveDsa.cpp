//- Remove All Occurrences Of An Element In An Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i =0 ;i < n; i++){
        if(a[i] != k){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}