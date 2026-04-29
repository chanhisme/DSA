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
    vector <int> pd(maxVal + 2, 0);
    for(int i = 0; i < n; i++){
        pd[l[i]] ++;
        pd[r[i] + 1] --;
    }
    vector <int> res(maxVal+2);
    res[0] = pd[0];
    for(int i = 1; i < maxVal+2; i++){
        res[i] = res[i-1] + pd[i];
    }
    int best = 0, val = 0;
    for(int i = 0; i <= maxVal+1; i++){
        if(res[i] > best){
            best = res[i];
            val = i;
        }
    }
    cout<<val;
    







    return 0;
}

























