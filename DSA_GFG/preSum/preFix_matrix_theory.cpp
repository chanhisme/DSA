#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, q;
    cin >> n >> m >> q;
    vector <vector<int>> a (n+1, vector<int> (m+1));
    vector <vector <int>> pfs (n+1, vector <int> (m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    
    for(int i  = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            pfs[i][j] = pfs[i-1][j] + pfs[i][j-1] - pfs[i-1][j-1] + a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m ;j++){
            cout<<pfs[i][j]<<' ';
        }
        cout<<endl;
    }

    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int res = pfs[x2][y2] - pfs[x1-1][y2] - pfs[x2][y1-1] + pfs[x1-1][y1-1];
        cout<<res<<endl;
    }

    //Number of element in area = (x2-x1 + 1) * (y2-y1+1);




    return 0;
}