
//find a longest subarray have at most K unique element
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //main Code
    int n, k; cin >> n >> k; 
    vector <int> a(n);
    unordered_map <int, int> cnt;
    for(int &x : a) cin >> x;
    int l = 0, res = 0;


    for(int r = 0; r < n; r++){
        cnt[a[r]] ++;
        while(cnt.size() > k){
            cnt[a[l]] --;
            if(cnt[a[l]] == 0) cnt.erase(a[l]);            
            l++;
        }
        res = max(res, (r-l+1));
    
    }
    cout<<res;
    

    return 0;
}