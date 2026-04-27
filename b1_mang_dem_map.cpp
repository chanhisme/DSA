#include <iostream>
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
    map <int, int> cnt;
    for(int i = 0; i < n; i++){
        cnt[a[i]] ++;
    }

    map<int, bool> isPrint;

    for(int i = 0; i < n; i++){
        if(cnt[a[i]] > 0 && isPrint[a[i]] == false){
            cout<<a[i]<<" : "<<cnt[a[i]]<<endl;
            isPrint[a[i]] = true;
        }
    }
    



    return 0;
}