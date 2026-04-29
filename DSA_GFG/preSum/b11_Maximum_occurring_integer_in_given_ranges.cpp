// Given two arrays l[] and r[] of size n where l[i] and r[i] denotes a range of numbers, 
// the task is to find the maximum occurring integer in all the ranges. 
// If more than one such integer exists, print the smallest one. 


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    int maxVal = -1;
    vector <int> l(n), r(n);
    for(int &x : l){
        cin >> x;
        maxVal = max(maxVal, x);
    }
    for(int &x : r){
        cin >> x;
        maxVal = max(maxVal, x);
    }
    vector <int> diff(maxVal+2);
    for(int i = 0; i < n; i++) {
        diff[l[i]]++;
        diff[r[i] + 1]--;
    }
    int best = 0, val = 0;
    for(int i = 1; i <= maxVal; i++) {
        diff[i] += diff[i - 1];

        if(diff[i] > best) {
            best = diff[i];
            val = i;
        }
    }

    cout << val;
    







    return 0;
}

























