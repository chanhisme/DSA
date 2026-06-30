#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string s = "aba";
    unordered_map <char, int> cnt;
    cnt[s[0]]++;
    cnt[s[1]]++;
    cnt[s[2]]++;
    cnt.erase(s[1]);
    cout<<cnt.size();




    return 0;
}