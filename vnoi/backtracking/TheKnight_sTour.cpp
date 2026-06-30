#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

const vector<int> dx = {-2, -2, -1, -1, 1, 1, 2, 2};
const vector<int> dy = {-1, 1, -2, 2, -2, 2, -1, 1};
int visited[100][100]={0};

int solve1(int x, int y, int cnt, int n, vector <vector <int>> &a){ //backtracking
    
    a[x][y] = cnt;
    visited[x][y] = 1;
    if(cnt == n * n - 1){
        return 1;
    }
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < n && nx >= 0 && ny < n && ny >= 0 && !visited[nx][ny]){
            if(solve1(nx, ny, cnt+1, n, a)){
                return 1;
            }
        }
        
    }
    visited[x][y] = 0;
    a[x][y] = 0;
    return 0;
}

int getDegree(int x, int y, int n){
    int cnt = 0;

    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]){
            cnt++;
        }
    }
    return cnt;
}

bool solve2(int x, int y, int cnt, int n, vector<vector<int>> &a){ //thuật toán Warnsdorff's Algorithm

    visited[x][y] = 1;
    a[x][y] = cnt;
    if(cnt == n*n-1) return true;

    // vector<tuple<int, int, int>> v;
    vector <array <int, 3>> v;

    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]){
            v.push_back({getDegree(nx, ny, n), nx, ny});

        }
    }

    sort(v.begin(), v.end());

    for(auto &it : v){
        // auto [deg, nx, ny] = it; // cho tuple
        
        if(solve2(it[1], it[2], cnt + 1, n, a))
            return true;
    }

    visited[x][y] = 0;
    a[x][y] = 0;
    return false;
}



int main(){
    int cnt = 0;
    int n;
    cin >> n;
    vector <vector <int>> a(n, vector <int> (n));
    // solve1(0, 0, cnt, n, a);
    solve2(0,0, cnt, n, a);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}