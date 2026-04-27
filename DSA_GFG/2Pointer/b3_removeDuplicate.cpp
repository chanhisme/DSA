#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    unordered_set<int> tmp;
    for(int &x : a) cin >> x;
    int l=0, r= 1;

    // //Cách 1: cho kể cả ko sort array
    // for(int i = 0; i < n; i++){
    //     tmp.insert(a[i]);
    // }
    
    // for(auto it = tmp.begin(); it != tmp.end(); it++) cout<<*it<<' ';
    //Cách 2: 2 con trỏ
    
    vector<int> res;
    while(r < n){
        if(a[r] != a[l]){
            l++;
            a[l] = a[r];
        }
        r++;
    }
    for(int i = 0; i < l+1; i++){
        res.push_back(a[i]);
        cout<<res[i]<<" ";
    }





    return 0;
}