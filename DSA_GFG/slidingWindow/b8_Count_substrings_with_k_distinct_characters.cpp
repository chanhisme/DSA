// Given a string s consisting of only lowercase English letters and an integer k, 
// count the total number of substrings (not necessarily distinct) of s that contain exactly k distinct characters.
// Note:

// A substring is a contiguous sequence of characters within a string.
// Substrings that are identical but occur at different positions should each be counted separately.
#include <iostream>
#include <unordered_map>
using namespace std;
long long count (string s, int k){
    unordered_map< char, int> cnt;
    int l = 0;
    long long res = 0;
    int n = s.length();
    for(int r = 0; r < n; r++){
        cnt[s[r]] ++;
        while(cnt.size() > k){
            cnt[s[l]] --;
            if(cnt[s[l]] == 0){
                cnt.erase(s[l]);
            }
            l++;
        }
        res += (r-l+1);
    }
    return res;
}
#define faster ios::sync_with_stdio(0); cin.tie(0);

int main(){
    faster;
    string s;
    cin >> s;
    int k;
    cin >> k;
    //chỗ này là phải vé ra, để có dc số subarr độ dài bằng K thì mình phải có cái bé 
    //hơn bằng K - từ cái bé hơn K tức k-1 thì sẽ bằng còn lại lại K
    cout<<count(s,k) - count(s, k-1);



    return 0;
}