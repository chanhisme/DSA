#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, k; cin >> n >> k;
    vector <int> a(n);
    unordered_set <int> us;
    for(int &x : a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(i > 0 && a[i] == a[i-1]) continue;
        int goal = k - a[i];
        int l = i+1, r = n-1;
        while(l < r){
            if(a[l]+a[r] < goal) l++;
            else if(a[l] + a[r] > goal) r--;
            else{
                cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
                l++, r--;
                while(l < r && a[l] == a[l-1]) l++;
                while(l < r && a[r] == a[r+1]) r--;
            }
        }
    }







    return 0;
}