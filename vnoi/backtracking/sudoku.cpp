#include <iostream>
#include <vector>

using namespace std;
    bool ok(int a [][9], int r, int c, int val){
        
        for(int i = 0; i < 9; i++){
            if(a[i][c] == val){
                return false;
            }
            
        }
        for(int i = 0; i < 9; i++){
            if(a[r][i] == val){
                return false;
            }
        }
        int nr = (r / 3) * 3;
        int nc = (c / 3) * 3;
        for(int i = nr; i < nr + 3; i++){
            for(int j = nc; j < nc + 3; j++){
                if(a[i][j] == val){
                    return false;
                }
            }
        }
        return true;
    }
    bool backtrack(int a[][9]){
        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if(a[r][c] == 0){
                    for(int i = 1; i <= 9; i++){
                        if( ok(a, r, c, i) == true){
                            a[r][c] = i;
                            if(backtrack (a)){
                                return true;
                            }
                            a[r][c] = 0;
                        }
                    } 
                return false;
                }
            }
        }
        return true;
    }


int main(){
    int a[9][9];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> a[i][j];
        }
    }
    backtrack(a);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}