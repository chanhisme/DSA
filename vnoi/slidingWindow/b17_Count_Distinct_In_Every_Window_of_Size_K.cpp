#include  <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //main code
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    vector <int> res(n-k+1);
    unordered_map <int, int> cnt;
    int l = 0, j =0;
    for(int r = 0; r < n; r++){
        cnt[a[r]] ++;
        if(r-l+1 > k){
            cnt[a[l]] --;
            if(cnt[a[l]] == 0){
                cnt.erase(a[l]);
            }
            l++;
        }
        if(r-l+1 == k){
            res[j] = cnt.size();
            j++;
        }
    }
    for(int x : res){
        cout<<x<<' ';
    }










    return 0;
}