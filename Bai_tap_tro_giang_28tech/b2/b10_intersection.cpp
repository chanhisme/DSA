#include <iostream>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>

using namespace std;


int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    ////Cách 1
    // unordered_set <int> b;
    // int m; cin >> m;
    // for(int i = 0; i < m; i++){
    //     int x; cin >> x;
    //     b.insert(x);
    // }
    // map<int, bool> isPrint;
    
    // for(int i = 0; i < n; i++){
    //     if(b.find(a[i]) != b.end() && isPrint[a[i]] == false){
    //         cout<<a[i]<<" ";
    //         isPrint[a[i]] = true;
    //     }
    // }

    //Cách 2
    set <int> b;
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    for(int i = 0; i < n; i++){
        if(b.find(a[i]) != b.end()){
            cout<<a[i]<<" ";
            b.erase(a[i]); //để ránh bị trùng
        }
    }



    return 0;
}