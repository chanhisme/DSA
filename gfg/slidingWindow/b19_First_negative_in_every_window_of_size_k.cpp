#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define f(i, a, b) for(int i = a; i < b; i++)
#define faster ios::sync_with_stdio(0); cin.tie(0);

int main(){
    faster;
    //main code
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    f(i, 0, n){
        cin >> a[i];
    };
    int nevIdx = 0, j = 0;
    vector <int> res(n-k+1);
    f(i, k-1, n){
        while( (nevIdx < i) && (a[nevIdx] >= 0 || nevIdx < i-k+1)){
            nevIdx ++;
        }
        if(nevIdx < n && a[nevIdx] < 0){
            res[j] = a[nevIdx];
            j++;
        }
        else{
            res[j] = 0;
            j++;
        }
    }
    
    f(i, 0, res.size()){
        cout<<res[i]<<' ';
    }






    return 0;
}