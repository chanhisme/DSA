#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt[128] = {0};
    int cnt_size = 0;
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for(int i = 0; i < t.size(); i++){
        if(cnt[t[i]] == 0){
            cnt_size ++;
        }
        cnt[t[i]]++;
        
    }
    int l = 0;
    int curr = 0;
    int len = n+1;
    int st;
    int ok[128] = {0};
        string res;
        for(int r= 0 ; r < n; r++){
            if(cnt[s[r]]){
                ok[s[r]]++;
                if(ok[s[r]] == cnt[s[r]]){
                    curr++;
            }
            
        }
        while(cnt_size == curr){
            if( (r-l+1) < len){
                len = (r-l+1);
                st = l;
            }
            if(cnt[s[l]]){
                 ok[s[l]] --;
                 if(ok[s[l]] < cnt[s[l]]){
                    curr--;
                }
            }
            
            l++;
        }
    }
    if(len == n-1) cout<<"";
    else cout<<s.substr(st, len);





    return 0;
}