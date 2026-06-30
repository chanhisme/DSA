#include <iostream>
#include <vector>

using namespace std;

vector <int> a;
vector <vector <int> > res;
int cnt = 0;
void solve(int n){

    if(a.size() == n){
        res.push_back(a);
        cnt++;
        return;
    }
    for(int i = 0; i <= 1; i ++){
        
        if(!a.empty() && i == 1 && a.back() == 1){
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
        for(int j = 0; j < n; j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }


    cout<<cnt;




    return 0;
}