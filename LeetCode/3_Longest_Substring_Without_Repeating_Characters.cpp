#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define foi(i,l,r) for(int i = l; i < r; i++)
int main(){
    unordered_map <char,int> cnt;
    string s;
    cin >> s;
    int maxLen = -1;
    int l =0, n = s.size();
    foi(r, 0, n){
        cnt[s[r]]++;
        while(cnt[s[r]] > 1){
            cnt[s[l]]--;
            l++;
        }
        maxLen = max(maxLen, r-l+1);
    }
    if(maxLen == -1) cout<<0;
    else cout<<maxLen;




    return 0;
}