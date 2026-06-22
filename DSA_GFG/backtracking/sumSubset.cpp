#include <iostream>
#include <vector>

using namespace std;
int step  = 0;
void solve(int start, int n, int k, int curr, vector <int> &a, vector <int> &res){
    
    if(curr == k){
        for(int x : res) cout << x << ' ';
        cout<<endl;
        step++;

        cout<<"step: "<<step<<endl;
        return;
    }
    if(curr > k){
        return ;
    }
    for(int i = start; i < n; i++){
            res.push_back(a[i]);
            curr += a[i];
            solve(i+1, n, k, curr, a, res);
            curr -= res.back();
            res.pop_back();
            
        }
}


int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n), res;
    for(int &x : a) cin >> x;
    int curr = 0;
    solve(0, n, k, curr, a, res);



    return 0;
}