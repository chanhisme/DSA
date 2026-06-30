#include <iostream>
#include <vector>
using namespace std;


void backtrack(int n, vector <int> &a, vector <string > &res){
    if(a.size() == n){
        string tmp="";
        for(int i = 0; i < n; i ++){
            tmp += (char)(a[i] + '0');
        }
        res.push_back(tmp);
        return;
    }
    for(int i = 0; i <= 1; i++){
        a.push_back(i);
        backtrack(n, a, res);
        a.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> a;
    vector <string > res;
    backtrack(n, a, res);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<endl;
    }






    return 0;
}