#include <iostream>
#include <vector>

using namespace std;
vector <int> a;
vector <vector <int>> res;
int cnt1 = 0;
void solve(int n, int k){
    if(a.size() == n){
        if(cnt1 == k){
            res.push_back(a);
        }
        return;
    }
    for(int i = 0; i <= 1; i++){
        if(i == 1){
            cnt1++;
        }
        a.push_back(i);
        solve(n, k);
        if(a.back()){
            cnt1--;
        }
        a.pop_back();
        
    }
}

int main(){
    int n, k, cnt = 0;
    cin>> n >> k;
    solve(n,k);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < n; j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }



    return 0;
}