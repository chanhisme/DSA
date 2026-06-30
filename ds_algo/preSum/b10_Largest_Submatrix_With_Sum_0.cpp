#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;


#define ll long long

int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <int>> a (n+1, vector <int> (m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    ll res = 0;
    for(int top = 1; top <= n; top ++){
        vector <int> tmp (m+1, 0);
        for(int bot = top; bot <= n; bot ++){
            for(int col = 1; col <= m; col ++){
                tmp[col] += a[bot][col];
            }


            unordered_map <int, int> cnt;
            cnt[0] = 0;
            ll sum =0;
            for(int col = 1; col <= m; col ++){
                sum += tmp[col];
                if(cnt.count(sum)){
                    ll width = col - cnt[sum];
                    ll height = bot - top + 1;
                    res = max(res, width * height);
                }
                else{
                    cnt[sum]= col;
                }
            }
        }
        
    }
    cout<< res;





    return 0;
}