#include <iostream>
#include <unordered_map>

using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);

int main(){
    faster;
    //main code
    unordered_map<char, int> cnt;
    string s;
    cin >> s;
    int k; cin >> k;
    int l = 0, dem = 0;
    for(int r = 0; s[r] != '\0'; r++){
        cnt[s[r]] ++;
        if((r-l+1) > k){
            cnt[s[l]] --;
            if(cnt[s[l]] == 0) cnt.erase(s[l]);
            l++;
        }
        if((r-l+1) == k && cnt.size() == k-1){
            dem++;
        }

    }
    cout<<dem;



    return 0;
}