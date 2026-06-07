#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map <int, int> cnt;
    int res = 0;
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int &x : a ) cin >> x;
    for(int i = 0; i < n; i++){
        int x = a[i];
        if(k == 0){
            res += cnt[x];
        }
        else{
            res += cnt[x-k];
            res += cnt[x + k];
        }
        
        cnt[x]++;
    }
    cout<<res;


    return 0;
}