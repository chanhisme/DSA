#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main (){
    vector <int> a;
    map<int, int> cnt;
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    bool ok = true;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
        if(a[i] ==50){
            if(cnt[25] > 0){
                cnt[25] --;
            }
            else{
                ok = false;
                break;
            }
        }
        else if(a[i] == 100){
            if(cnt[50] > 0 && cnt[25] > 0){
                cnt[50] --;
                cnt[25] = cnt[25] - 1;
            }
            else if (cnt[50] == 0 && cnt[25] >= 3){
                cnt[25] = cnt[25] - 3;
            }
            else if(cnt[25] < 3 && cnt[50] == 0){
                ok = false;
                break;
            }
        }
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }





    return 0;
}