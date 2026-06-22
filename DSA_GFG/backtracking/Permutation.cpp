#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
void backtracking(int n, vector <int> &a, vector <int> &res, vector <int> &used){
    if(res.size() == n){
        for(int x : res) cout<<x<<' ';
        cnt++;
        cout<<endl;
        cout<<"step: "<<cnt<<endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(!used[i]){
            used[i] = 1;
            res.push_back(a[i]);
            backtracking(n, a, res, used);
            res.pop_back();
            used[i] = 0;

        }

            
    }
}



int main(){
    int n; 
    cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    vector <int> res;
    vector <int> used(n, 0);
    backtracking(n, a, res, used);






    return 0;
}