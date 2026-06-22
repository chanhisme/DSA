#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int sum = 0, curr = INT_MAX;
    for(int i = 0; i < n; i++){
        sum = min(a[i], sum + a[i]);
        curr = min(curr, sum);
    }

    cout<<curr;







    return 0;
}