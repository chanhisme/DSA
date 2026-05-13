#include <iostream>
#include <vector>
using namespace std;

vector <int> sub1, sub2;
vector <vector <int>> res;
vector <int> used;
int total = 0;

int sum1 =0;
void solve(int start, int size1, int size2, int n, vector <int> &a){
    if(size1 == sub1.size()){
        if(sum1 * 2 == total){
            sub2.clear();
            for(int i = 0; i < n; i++){
                if(!used[i]){
                    sub2.push_back(a[i]);
                }
            }
        
            res.push_back(sub1);
            res.push_back(sub2);
            
        }
        
        return;
    }

    for(int i = start; i < n; i++){
        if(!used[i]){
            if(sum1 + a[i] > total / 2) continue;
            sum1 += a[i];
            sub1.push_back(a[i]);
            used[i] = 1;
            solve(i+1, size1, size2, n, a);
            sum1 -= a[i];
            sub1.pop_back();
            used[i] = 0;
        }
    }

}
int main(){
    int n;
    cin >>n;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
        total += x;
    }
    int size1, size2;
    used.resize(n, 0);

    if(n % 2 == 0){
        size1 = n/2;
        size2 = n - size1;
    }
    else{
        size1 = (n+1)/2;
        size2 = n - size1;
    }
    
    if(n % 2 == 0){
        sub1.push_back(a[0]);
        sum1 += a[0];
        used[0] = 1;

        solve(1, size1, size2, n, a);
    }
    else{
        solve(0, size1, size2, n, a);
    }
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}