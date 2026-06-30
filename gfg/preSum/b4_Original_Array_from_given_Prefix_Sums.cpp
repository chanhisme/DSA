#include <iostream>
#include <vector>
using namespace std;

#define foi(i, l, r) for(int i = l; i < r; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    int n; cin >> n;
    vector <int> a(n), pd(n);
    foi(i, 0, n){
        cin >> a[i];
    }
    pd[0] = a[0];
    foi(i, 1, n){
        pd[i] = a[i] - a[i-1];
    }
    foi(i,0,n){
        cout<<pd[i]<<' ';
    }





    return 0;
}