#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    unordered_map <int, int> cnt;
    for(int x : a){
        cnt[x] ++;
    }
    int ok = 1;
    for(int x : b){
        if(cnt[x] == 0){
            ok = 0;
            break;
        }
    }
    if(ok) cout<<"true";
    else cout<<"false";




    return 0;
}