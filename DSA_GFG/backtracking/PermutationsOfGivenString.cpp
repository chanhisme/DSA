#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string s, string tmp, vector <string>  &res, vector <int> &used){

    if(tmp.size() == s.size()){
        res.push_back(tmp);
        return;
    }
    for(int i = 0; i < s.size(); i++){
        if(i > 0 && s[i] == s[i-1] && !used[i-1]){
            continue;
        }
        if(!used[i]){
            tmp.push_back(s[i]);
            used[i] = 1;
            solve(s, tmp, res, used);
            tmp.pop_back();
            used[i] = 0;
        }



    }


}
int main(){
    string s;
    cin >> s;
    
    string tmp;
    vector <int> used(s.size(), 0);
    vector <string> res;
    sort(s.begin(), s.end());
    solve(s, tmp, res, used);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<endl;
    }




    return 0;
}