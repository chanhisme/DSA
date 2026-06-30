#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define f(i,a,b) for(int i = a; i < b; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
ll solve(vector <int> &a, int n, int k){
    unordered_map <int, int> cnt;
    ll res = 0;
    int l = 0;
    for(int r= 0; r < n; r ++){
        cnt[a[r]]++;
        while(cnt.size() > k){
            cnt[a[l]]--;
            if(cnt[a[l]] == 0){
                cnt.erase(a[l]);
            }
            l++;
        }
        res += (r-l+1);
    }
    return res;
}
int main(){
    faster;
    //main code
    int n;
    cin >> n;
    vector <int> a(n);
    f(i, 0, n){
        cin >> a[i];
    }
    unordered_map<int, int> target;
    f(i, 0, n){
        target[a[i]]++;
    }
    int k = target.size();
    cout<<solve(a, n, k) - solve(a,n,k-1);
    return 0;
}