#include <iostream>
#include <unordered_map>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //MainCode
    int n; cin >> n;
    int a[3] = {1000, 2000, 5000};
    unordered_map<int, int> cnt;
    for(int i = 2; i >= 0; i--){
        cnt[a[i]] = n / a[i];
        n = n % a[i];
    }
    for(int i = 2; i >= 0; i--){
        cout<<cnt[a[i]]<<" ";
    }






    return 0;
}