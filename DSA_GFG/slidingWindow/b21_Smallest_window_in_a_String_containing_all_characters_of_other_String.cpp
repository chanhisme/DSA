#include <iostream>
#include <unordered_map>
#include <algorithm>
#define f(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    string s;
    cin >> s;
    string pat;
    cin >> pat;
    unordered_map <char, int> need, win;
    f(i, 0, pat.length()){
        need[pat[i]] ++;
    }
    int min_len = s.size()+1, l = 0, start;
    int formated = 0;
    f(r, 0, s.size()){
        win[s[r]] ++;
        if(need.count(s[r]) && need[s[r]] == win[s[r]]){
            formated++;
        }
        while(formated == need.size()){
            if(r - l + 1 < min_len){
                min_len = min(min_len, r-l+1);
                start = l;
            }

            win[s[l]] --;

            if(need.count(s[l]) && need[s[l]] > win[s[l]] ){
                formated --;
            }
            l++;
        }
    }
    if(min_len == s.size()+1){
        cout<<"";
    }
    else{
        cout<<s.substr(start, min_len);
    }
        









    return 0;
}