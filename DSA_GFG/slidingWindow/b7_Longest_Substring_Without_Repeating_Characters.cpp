// Given a string s having lowercase characters, find the length of the longest substring without repeating characters. 

#include <iostream>
#include <unordered_map>
using namespace std;

long long myMax(long long currMax, long long local){
    if(local > currMax) currMax = local;
    return currMax;
}
int main(){
    string s;
    cin >> s;
    int n = s.length();
    int l = 0, r = 0, len = 1;
    long long res = -10e9;
    unordered_map<char, int> cnt;
    while(r < n){
        cnt[s[r]] ++;
        while(cnt[s[r]] > 1){
            cnt[s[l]] --;
            l++;
        }
        res = myMax(res, r - l + 1);
        r++;
    }
    cout<<res;


    return 0;
}