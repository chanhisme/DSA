// Given a binary array arr[] and an integer k, find the maximum length of 
//a subarray containing all ones after flipping at most k zeroes to 1's.
#include <iostream>
#include <vector>
using namespace std;

long long findMax(long long global, int local){
    if(local > global) global = local;
    return global;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //MainCode
    int n, k; cin >> n >> k;
    int cnt0 = k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    long long currMax = -10e9;
    int l = 0, r= 0;
    while(r < n){
        if(a[r] == 0){
            cnt0 --;
        }
        while(cnt0 < 0){
            if(a[l] == 0){
                cnt0 ++;
            }
            l++;
        }
        currMax = findMax(currMax, (r-l+1));
        r++;
    }
    cout<<currMax;





    return 0;
}