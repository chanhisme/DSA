/*
CF 677A - Vanya and Fence

Time limit: 1 second
Memory limit: 256 MB

Vanya and his friends are walking along a fence of height h and do not want
the guard to notice them.

The height of the i-th friend is ai:
- If ai <= h, the friend walks normally and occupies width 1.
- If ai > h, the friend bends down and occupies width 2.

The friends want to walk in a single row. Find the minimum width of the road
required so that all friends can walk without being noticed by the guard.

Input:
- First line: integers n and h
    n = number of friends
    h = height of the fence
- Second line: n integers ai
    ai = height of the i-th friend

Constraints:
- 1 <= n <= 1000
- 1 <= h <= 1000
- 1 <= ai <= 2h

Output:
- Print a single integer: the minimum possible width of the road.

Example:
Input:
3 7
4 5 14

Output:
4
*/
#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,h;
    cin >> n >> h;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int res = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= h){
            ++res;
        }
        else{
            res += 2;
        }
    }
    cout<<res;





    return 0;
}