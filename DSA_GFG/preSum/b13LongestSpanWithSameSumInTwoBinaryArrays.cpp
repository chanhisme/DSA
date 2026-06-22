#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;



int main(){

    int n;
    cin >> n;
    vector <int> l(n), r(n), pd(n);
    for(int &x : l) cin >> x;
    for(int &x : r) cin >> x;
    unordered_map <int, int> cnt;
    for(int i = 0; i < n; i++){
        pd[i] = l[i] - r[i];
    }
    cnt[0] = - 1;
    int len = 0, pfs = 0;
    for(int i = 0; i < n; i++){
        pfs += pd[i];
        if(cnt.count(pfs)){
            len = max(len, i - pfs);
        }
        else{
            cnt[pfs] = i;
        }
    }
    cout<<len;






    return 0;
}