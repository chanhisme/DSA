#include <iostream>
#include <vector>
using namespace std;

const int dx[]= {-1, 0, 1, 0};
const int dy[]= {0, 1, 0, -1};
const char c[]={'U', 'R', 'D', 'L'};

vector <char> tmp;
vector <vector <char>> res;

void solve(int x, int y, int n, vector <vector <int>> &a){
    if(x == n-1 && y == n-1){
        res.push_back(tmp);
        return;
    }
    a[x][y] = 0;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if( nx >= 0 && nx < n && ny >= 0 && ny < n && a[nx][ny] != 0 ){
            tmp.push_back(c[i]);
            
            solve(nx, ny, n, a);
            tmp.pop_back();
        }
    }
    a[x][y] = 1;
    
}

int main(){
    
    int n;
    cin >> n;
    vector <vector <int>> a (n, vector <int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    solve(0,0,n, a);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }




    return 0;
}