#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, s; cin >> n >> s;
    vector <int> a(n);
    unordered_map <int, int> cnt;
    for(int &x : a){
        cin >> x;
       
    }
    int l = 0; long long dem = 0; 
    for(int r= 0; r < n; r ++){
        cnt[a[r]]++;
        while(cnt.size() > s){
            cnt[a[l]] --;
            if(cnt[a[l]] == 0) cnt.erase(a[l]);
            l++;
        }
        dem += (r - l + 1);
    }
    cout<<dem;




    return 0;
}