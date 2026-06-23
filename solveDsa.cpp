//- Maximum Sum Subarray Having Sum Less Than or Equal to Given Sum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;

    int l = 0;
    int curr_sum = 0, res = 0;
    for(int r = 0; r < n; r++){
        curr_sum += a[r];
        while(l <= r && curr_sum > k){
            curr_sum -= a[l];
            l++;
        }
        res = max(res, curr_sum);
    }
    cout<<res;



    return 0;
}