// Given two binary arrays a1[] and a2[] of equal length, find the maximum length of a subarray [i...j] 
// such that the sum of elements from i to j in both arrays is equal, i.e.,
// a1[i] + a1[i+1] + ... + a1[j] == a2[i] + a2[i+1] + ... + a2[j].

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n), pd(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    
    for(int i = 0; i < n; i++){
        pd[i] = a[i] - b[i];
    }
    unordered_map<int, int> cnt;
    cnt[0] = -1;
    int sum = 0, res = -1;
    for(int i = 0; i < n; i++){
        sum += pd[i];
        if(cnt.count(sum)){
            res = max(res, i - cnt[sum]);
        }
        else{
            cnt[sum] = i;
        }
    }
    cout<<res;
    



    return 0;
}