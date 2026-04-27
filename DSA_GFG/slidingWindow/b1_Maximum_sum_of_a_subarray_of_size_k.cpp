// Given an array of integers arr[] and an integer k, find the maximum possible sum among all contiguous subarrays of size exactly k.
// A subarray is a sequence of consecutive elements from the original array. 
// Return the maximum sum that can be obtained from any such subarray of length k.

#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //mainCode
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a ) cin >> x;
    long long sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    long long myMax = sum;
    for(int i = k; i < n; i++){
        sum += a[i];
        sum -= a[i-k];
        if(sum > myMax) myMax = sum;
    }
    cout<<myMax;



    return 0;
}