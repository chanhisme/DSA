#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void out(int l, int r, string s){
    for(int i = l; i <= r; i++){
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int let [26] = {0};
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x = (int)s[i] - 'a';
        if(let[x] == 0){
            let[x]++;
            cnt++;
        }
    }
    int l = 0;
    int curr = 0, res = n+1;
    int ok [26] = {0};
    for(int r = 0; r < n; r ++){
        if(ok[s[r] - 'a'] == 0){
            curr++;
        }
        ok[s[r] - 'a'] ++;
        
        while(cnt == curr){
            res = min(res, (r-l+1));
            // out(l, r, s);
            ok[s[l] - 'a'] --;
            if(ok[s[l] - 'a'] == 0){
                curr--;
            }
            l++;
        }
    }
    cout<<res;
    






    return 0;
}