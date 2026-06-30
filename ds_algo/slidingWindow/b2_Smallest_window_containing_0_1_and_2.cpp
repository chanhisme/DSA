// Given a string S of size N consisting of the characters 0, 1 and 2, 
// the task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. 
// If no such substring exists, then return -1.
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <climits>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //mainCode
    string s;
    cin >> s;
    int n = s.length();
    vector <int> cnt(3,0);
    int minSize = INT_MAX;
    int have = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        int val = s[r] - '0';
        cnt[val] ++;
        if(cnt[val] ==  1){
            have++;
        }
        while(have == 3){
            minSize = min(minSize, r-l+1);
            int tmp = s[l] - '0';
            cnt[tmp] --;
            if(cnt[tmp] == 0){
                have --;
            }
            l++;
        }
    }

    if(minSize != INT_MAX) cout<<minSize;
    else cout<<-1;
    return 0;
}