#include <iostream> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, k; cin >> n >> k;
    unordered_map<int,int> cnt;
    unordered_set <int> sub;
    vector <int> a(n);
    for(int &x : a) {
        cin >> x;
        cnt[x]++;
        sub.insert(x);
    }
    bool found = false;
    // //Cách 1: 2 pointer
    // sort(a.begin(), a.end());
    // int l = 0, r= n-1;
   
    // while(l < r){
    //     int s = a[l] + a[r];
    //     if(s < k) l++;
    //     else if(s > k) r--;
    //     else{
    //         found = true;
    //         break;
    //     }
    // }
    //Cách 2: hashing map
    // for(int i = 0; i < n; i++){
    //     int target = k - a[i];
    //     if(cnt.count(target)){
    //         if(a[i] != target || cnt[a[i]] >= 2){
    //             found =true;
    //         }
    //     }
    // }
    //Cách 3: hashing set
    for(int i = 0; i < n; i++){
        int target = k - a[i];
        if(sub.find(target) != sub.end()){
            found = true;
            break;
        }
    }
    if(found) cout<<"true";
    else cout<<"false";
    




    return 0;
}