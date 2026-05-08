#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    // //Cách 1
    // vector <int> a;
    // int n, k; cin >> n >> k;
    // int ok = 0;
    // for(int i = 0; i < n; i ++){
    //     int x; cin >> x;
    //     a.push_back(x);
    // }
    // sort(a.begin(), a.end());
    // int left = 0, right = a.size() -1;
    // while(left < right){
    //     ok = 0;
    //     int sum = a[left] + a[right];
    //     if(sum > k){
    //         right --;
    //     }
    //     else if(sum < k){
    //         left++;
    //     }
    //     else{
    //         ok = 1;
    //         break;
    //     }
    // }

    // if(ok==1){
    //     cout<<"YES";
    // }    
    // else{
    //     cout<<"NO";
    // }
    //Cách 2
    vector <int> a;
    int n, k; cin >> n >> k;
    unordered_map <int, int> cnt;
    int ok = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int target = k - a[i];
        if(cnt.count(target)){
            ok = 1;
            break;
        }
        cnt[a[i]] = i;
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}