//Longest Consecutive Sequence
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;


int main(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    unordered_set <int> s (a.begin(), a.end());
    int res = 0;

    for(int x : s){
        if(s.find(x-1) == s.end()){
            int len = 1;
            while(s.find(x + len) != s.end()){
                len ++;
            }
            res = max(res, len);
        }
    }
    cout<<res;


    return 0;
}