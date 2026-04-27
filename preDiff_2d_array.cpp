#include <iostream>
using namespace std;

const long MAX = 1005;
int a[MAX][MAX];
int d[MAX][MAX];
int s[MAX][MAX];
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n;i ++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }

    for(int i =  1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            d[i][j] =  a[i][j]- a[i-1][j] - a[i][j-1] + a[i-1][j-1];
        }
    }
    //cập nhật giá trị
    int x1,y1,x2,y2, k;
    cin >> x1 >> y1>>x2>>y2 >>k;
    d[x1][y1] += k;
    d[x1][y2+1] -=k;
    d[x2+1][y1] -=k;
    d[x2+1][y2+1] +=k;
    //preSum để thành giá trị gốc

    for(int i =  1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            s[i][j] = d[i][j] +a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }



    return 0;
}