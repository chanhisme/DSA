// duyệt các ô có cùng đỉnh của 1 ô cụ thể trong ma trận/lưới

#include <iostream>
#include <vector>

using namespace std;
const vector <int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
const vector <int> dy = {0, 1, 1, 1, 0, -1, -1, -1};
int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < n && nx >= 0 && ny < m && ny >= 0){
            cout<<nx<<" "<<ny<<" value: "<<a[nx][ny]<<endl;
        }
            
    }






    return 0;
}