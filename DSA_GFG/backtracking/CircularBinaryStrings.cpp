#include <iostream>
#include <vector>
using namespace std;
vector <int> a;
vector <vector <int> > res;

void solve(int n){

    if(a.size() == n){
        if(a[a.size()-1] == a[0] && a[0] == 1){
            return;
        }

        res.push_back(a);
        return;
    }
    for(int i = 0; i <= 1; i++){
        if(!a.empty() && a.back()==1 && i == 1){
            continue;
        }
        a.push_back(i);
        solve(n);
        a.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < n; j ++){
            cout<<res[i][j];
        }
        cout<<endl;
    }







    return 0;
}