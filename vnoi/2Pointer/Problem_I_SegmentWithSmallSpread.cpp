#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, s; cin >> n >> s;
    vector <int> a(n);
    multiset<int> sub;
    long long dem = 0;
    for(int &x : a) cin >> x;
    int l = 0;
    for(int r =0; r < n; r++){
        sub.insert(a[r]);
        while(sub.size() >= 2 && (*sub.rbegin() - *sub.begin()) > s){
            auto it = sub.find(a[l]);
            sub.erase(it);
            l++;
        }
        dem += (r-l+1);
    }
    cout<<dem;





    return 0;
}