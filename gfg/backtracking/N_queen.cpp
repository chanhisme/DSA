#include <iostream>
#include <vector>
using namespace std;
    void solve(int row, int n, vector <int> &visitedDia1, vector <int> &visitedDia2
        , vector <int> &visitedCol, vector <vector <int>> &res){
        if(row == n){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl<<endl;
            return;
        }
        for(int col = 0; col < n; col ++){
            if(visitedCol[col] || visitedDia1[row-col + (n-1)] || visitedDia2[row + col]){
                continue;
            }
            visitedCol[col] = 1;
            visitedDia1[row-col + (n-1)] = 1;
            visitedDia2[row + col] = 1;
            res[row][col] = row + 1;
            solve(row+1, n, visitedDia1, visitedDia2, visitedCol, res);
            visitedCol[col] = 0;
            visitedDia1[row-col + (n-1)] = 0;
            visitedDia2[row + col] = 0;
            res[row][col] = 0;
        
        }

    }
    

int main(){
    
    int n;
    cin >> n;
    vector <int> visitedDia1(2*n-1, 0), visitedDia2 (2*n-1, 0), visitedCol (n,0) ;
    int row = 0;
    vector <vector <int>> res(n, vector <int> (n));
    solve(0, n, visitedDia1, visitedDia2,visitedCol, res);
    






    return 0;
}