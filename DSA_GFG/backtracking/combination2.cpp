#include <iostream>
#include <vector>
using namespace std;

int s = 0;
void solve(int start, int n, int k, vector <int> &a, vector <vector <int> >&res){
    if(a.size() == k){
        res.push_back(a);
        return;
    }
    for(int i = start; i <= n; i++){
        a.push_back(i);
        solve(i+1, n, k, a, res);
        a.pop_back();
    }

}
int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a;
    vector < vector <int> > res;
    solve(1, n, k, a, res);


    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }








    return 0;
}