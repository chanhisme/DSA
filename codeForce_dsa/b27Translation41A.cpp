/*
CF 41A - Translation

Time limit: 1 second
Memory limit: 256 MB

The translation from the Berland language into the Birland language is not an easy task.
Those languages are very similar: a Berlandish word differs from a Birlandish word with
the same meaning a little: it is spelled (and pronounced) reversely.

For example:
code -> edoc

Vasya translated the word s from Berlandish into Birlandish as t.
Help him determine whether the translation is correct.

Input:
- First line: string s
- Second line: string t
- Both strings consist of lowercase Latin letters.
- 1 <= |s|, |t| <= 100

Output:
- Print "YES" if t is equal to s written in reverse.
- Print "NO" otherwise.

Example:
Input:
code
edoc

Output:
YES
*/
#include <bits/stdc++.h>
using namespace std;

bool isReverse(string s, string b){
    string tmp = s;
    int l = 0, r = s.size() -1;
    while(l < r){
        char c = tmp[l];
        tmp[l] = tmp[r];
        tmp[r] = c;
        l++;
        r--;
    }
    return b == tmp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a;
    cin >> b;
    if(isReverse(a,b))cout<<"YES";
    else cout<<"NO";
    return 0;
}