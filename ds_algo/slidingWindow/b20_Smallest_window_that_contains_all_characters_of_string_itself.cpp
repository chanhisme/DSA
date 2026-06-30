#include <iostream>
#include <algorithm>
#include <unordered_map>
#define f(i, a, b) for(int i = a; i < b; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    faster;
    //main code
    string s;
    cin >> s;
    unordered_map <char, int> cnt, res;
    f(i, 0, s.length()){
        cnt[s[i]]++;
    }
    int l = 0, sub_len = s.size()+1;
    f(r, 0, s.length()){
        res[s[r]]++;
        while(res.size() == cnt.size()){
            sub_len = min(sub_len, r-l+1);
            res[s[l]]--;
            if(res[s[l]] == 0){
                res.erase(s[l]);
            }
            l++;
        }
    }
    cout<<sub_len;







    return 0;
}