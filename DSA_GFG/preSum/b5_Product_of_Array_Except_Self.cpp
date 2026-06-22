#include <iostream>
#include <vector>
using namespace std;
#define foi(i,l,r) for(int i = l; i < r; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    int n;
    cin >> n;
    vector <int> a(n);
    vector <long long> res(n);
    foi(i, 0, n){
        cin >> a[i];
    }
    long long tmp = 1;
    int cnt = 0;
    foi(i, 0, n){
        if(a[i] == 0){
            cnt++;
        }
        else{
            tmp *= a[i];
        }
        
    }
    foi(i, 0, n){
        if(cnt > 1){
            res[i] = 0;
        }
        else if(cnt == 1){
            if(a[i] == 0){
                res[i] = tmp;
            }
            else{
                res[i] = 0;
            }
        }
        else {
            res[i] = tmp / a[i];
        }
    }
    foi(i, 0, n){
        cout<<res[i]<<' ';
    }






    return 0;
}