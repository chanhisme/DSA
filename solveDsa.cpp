#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int count(string s, int k){
    unordered_map <char, int> mp;
    int cnt = 0;
    int l = 0;
    int res = 0;
    for(int r = 0; r < s.size(); r++){
        if(r - l + 1 > k){
            mp[s[l]]--;
            if(mp[s[l]] == 0){
                mp.erase(s[l]);
            }
            l++;
            
        }
        
        mp[s[r]]++;

        if(r-l+1 == k && mp.size() == k-1){
            res ++;
        }
        
    }
    return res;
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    

    cout<<count(s, k);




    return 0;
}