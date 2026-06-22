#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //main code
    int q;
    cin >> q;
    while(q--){
        int n;
        long long k;
        cin >> n >> k;
        
        vector <long long> a(n+1);
        a[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        if(k == 0){
            int ok = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] == 0){
                    cout<<i<<' '<<i<<'\n';
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                cout<<-1<<'\n';
            }
            continue;
        }
        
        long long sum = 0;
        pair <int, int> res = {-1,-1};
        int l = 1;
        for(int r= 1 ; r <= n; r++){
            sum += a[r];
            while(sum > k && l <= r){
                sum -= a[l];
                l++;
            }
            if(sum == k){
                res.first = l;
                res.second = r;
                break;
            }
            
        }
        if(res.first != -1 && res.second != -1){
            cout<<res.first<<' '<<res.second<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    






    return 0;
}