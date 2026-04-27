#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);


int main(){
    string s;
    cin >> s;
    string pat;
    cin >> pat;
    int k = pat.length();

   vector <int> s_cnt(26,0), pat_cnt(26,0);
    for(int i = 0; pat[i] != '\0'; i++){
        pat_cnt[pat[i] - 'a']++;
    }
    int l = 0, res = 0;
    for(int r =0 ; s[r] != '\0'; r++){
        s_cnt[s[r] - 'a'] ++;

        if(r - l + 1 > k){
            s_cnt[s[l] - 'a'] --;
            l++;
        }

        if(r - l + 1 == k && s_cnt == pat_cnt) res++;
    }
    cout<<res;



    return 0;
}