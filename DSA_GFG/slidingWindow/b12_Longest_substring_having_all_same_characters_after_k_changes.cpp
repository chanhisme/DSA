#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    cin >> s;
    cin.ignore();
    int k;
    cin >> k;
    unordered_map<char,int> cnt;
    int maxFreq = -1, res = -1, l = 0;
    for(int r = 0; s[r] != '\0'; r++){
        cnt[s[r]] ++;
        maxFreq = max(maxFreq, cnt[s[r]]);
        if(r-l+1 - maxFreq > k){
            cnt[s[l]]--;
            l++;
        }
        res = max(res, r-l+1);
    }
    cout<<res;





    return 0;
}