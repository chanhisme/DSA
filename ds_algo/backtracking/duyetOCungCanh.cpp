

// duyệt 4 ô có cùng cạnh của 1 ô bất kì trên ma trận/lưới
#include <iostream>
#include <vector>
using namespace std;
const vector <int> dx = {0, 0, -1, 1};
const vector <int> dy = {1, -1, 0, 0};

int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <int>> a(n, vector <int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    for(int i = 0; i < 4; i ++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < n && nx >= 0 && ny < m && ny >= 0){
            cout<<nx<<" "<<ny<<" Value: "<<a[nx][ny]<<endl;
        }
        
        
    }



    return 0;
}