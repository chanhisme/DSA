// There are two matrices, before[][] and after[][] of size N×M. 
// The matrix after[][] is obtained by applying the 2D prefix sum operation on before[][]. Given the matrix after[][], 
// reconstruct the original matrix before[][].


#include <iostream>
#include <vector>

using namespace std;


void solve(vector< vector <int> > &a, vector< vector <int> > &pfd, int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            pfd[i][j] = a[i][j] - a[i-1][j] - a[i][j-1] + a[i-1][j-1];
        }
    }
}
#define faster ios::sync_with_stdio(0); cin.tie(0)

int main(){
    faster;
    //maincode
    int n, m;
    cin >> n >> m;
    vector< vector <int> > a (n+1, vector <int> (m+1)), pfd (n+1, vector <int> (m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    solve(a, pfd, n, m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j ++){
            cout<<pfd[i][j]<<' ';
        }
        cout<<'\n';
    }



    return 0;
}