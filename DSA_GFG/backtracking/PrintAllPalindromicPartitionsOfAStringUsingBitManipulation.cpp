#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;

bool isPalindrome(string s){
    int l = 0, r = s.size()-1;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
vector < vector <string>> res;
void solve(int start, vector <string> &tmp, int n, string s){
    if(start == n){
        res.push_back(tmp);

        return;
    }
    for(int i = start; i < n; i++){
        string sub = s.substr(start, i - start + 1);
        if(isPalindrome(sub)){
            tmp.push_back(sub);
            solve(i+1, tmp, n, s);
            tmp.pop_back();
        }
    }
}

int main(){
    string s;
    vector <string> tmp;
    cin >> s;
    int n = s.size();
    solve(0, tmp, n, s);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}