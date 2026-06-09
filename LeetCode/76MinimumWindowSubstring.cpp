#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <char, int> cnt;
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for(int i = 0; i < t.size(); i++){
        cnt[t[i]]++;
    }
    int l = 0;
    int curr = 0;
    int len = n+1;
    unordered_map <char, int> ok;
    string res;
    for(int r= 0 ; r < n; r++){
        if(cnt.count(s[r])){
            ok[s[r]]++;
            if(ok[s[r]] == cnt[s[r]]){
                curr++;
            }
            
        }
        
        while(cnt.size() == curr){
            if( (r-l+1) < len){
                len = (r-l+1);
                res = s.substr(l, r-l+1);
            }
            ok[s[l]] --;
            if(ok[s[l]] == 0){
                curr--;
                ok.erase(s[l]);
            }
            l++;
        }
    }
    cout<<res;





    return 0;
}