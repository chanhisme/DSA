#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    vector <int> max_end(n);
    max_end[0] = a[0];
    for(int i = 1; i < n ; i ++){
        max_end[i] = max(a[i], max_end[i-1] + a[i]);
    }
    int win_sum = 0, ans;
    for(int i = 0; i < k; i++){
        win_sum += a[i];
    }
    ans = win_sum;
    for(int i = k; i < n; i++){
        win_sum += a[i] - a[i-k];

        ans = max(ans, win_sum);
        ans = max(ans, win_sum + max_end[i-k]);
    }
    cout<<ans;
    


    return 0;
}