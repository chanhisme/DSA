#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    long long best_sum = 0;
    long long curr = 0;
    //kadane algorithm
    for(int i = 0; i < n; i++){
        curr = max(curr + a[i], 1LL * a[i]);
        best_sum = max(best_sum, curr);
    }
    cout<<best_sum;






    return 0;
}