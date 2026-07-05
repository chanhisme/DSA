// A. Calculating Function
// time limit per test1 second
// memory limit per test256 megabytes
// For a positive integer n let's define a function f:

// f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

// Your task is to calculate f(n) for a given integer n.

// Input
// The single line contains the positive integer n (1 ≤ n ≤ 1015).

// Output
// Print f(n) in a single line.

// Examples
// InputCopy
// 4
// OutputCopy
// 2
// InputCopy
// 5
// OutputCopy
// -3
// Note
// f(4) =  - 1 + 2 - 3 + 4 = 2

// f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




ll out(ll n){
    if(n % 2 == 0) return n/2;
    return n/2 - n;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout<<out(n);




    return 0;
}