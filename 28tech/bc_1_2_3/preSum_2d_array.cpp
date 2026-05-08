#include <iostream>
using namespace std;

const int MAX = 1005;
int a[MAX][MAX];
int preFix[MAX][MAX]; // khởi tạo mặc định = 0

int main() {
    int n, m;
    cin >> n >> m;

    // đọc input 1-based
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    // tính prefix sum 2D
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            preFix[i][j] = preFix[i-1][j] + preFix[i][j-1] - preFix[i-1][j-1] + a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1,x2,y1,y2;
        int res = preFix[x2][y2] - preFix[x1-1][y2] - preFix[x2][y1-1] + preFix[x1-1][y1-1];
        cout<<res<<endl;
    }
  

    return 0;
}
