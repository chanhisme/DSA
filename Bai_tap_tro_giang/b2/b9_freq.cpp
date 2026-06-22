#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main (){
    // //Cách 1 dùng map
    // int n ; cin >> n;
    // vector <int> a(n);
    // map <int, int> cnt;
    // for(int &x : a){
    //     cin >> x;
    //     cnt[x] ++;
    // }

    // map<int, bool> isPrint;

    // for(int i = 0; i < n; i++){
    //     if(cnt[a[i]] > 0 && isPrint[a[i]] == false){
    //         cout<<a[i]<<" : "<<cnt[a[i]]<<endl;
    //         isPrint[a[i]] = true;
    //     }
    // }
    
    //Cách 2 tốt nhất
    int n ; cin >> n;
    vector <int> a(n);
    unordered_map <int, int> cnt;
    for(int &x : a){
        cin >> x;
        cnt[x]++;
    }
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] > 0){
            cout<<a[i]<<" : "<<cnt[a[i]]<<endl;
            cnt[a[i]] = -1;
        }
    }
    




    return 0;
}