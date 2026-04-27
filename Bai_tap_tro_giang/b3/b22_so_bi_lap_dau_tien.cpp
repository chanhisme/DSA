// Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a;
    unordered_map<int, int> cnt;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    bool ok = false;
    for(int i = 0; i < n; i++){
        cnt[a[i]] ++;
        if(cnt[a[i]] == 2){
            cout<<a[i];
            ok = true;
            break;
        }
    }
    if(!ok){
        cout<<-1;
    }



    return 0;
}