#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);



    int n, m;
    cin >> n >> m;
    vector < vector <int> > a(n+1, vector <int> (m+1));
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int res = INT_MIN;
    for(int top = 1; top <= n; top ++){
        vector <int> tmp (m+1, 0);
        for(int bot = top; bot <= n; bot ++){
            for(int col = 1; col <= m; col ++){
                tmp[col] += a[bot][col];
            }
            int sum = tmp[1];
            int best = INT_MIN;
            for(int col = 1; col <= m; col ++){
                sum = max(tmp[col], sum + tmp[col]);
                best = max(best, sum);
            }
            res = max(res, best);
        }
    }

    cout<<res;






    return 0;
}