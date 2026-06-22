#include <iostream>

using namespace std;

int res(int n, int k){
    if(k > n){
        return 0;
    }
    if( k == n){
        return 1;
    }
    else if(k == 0){
        return 1;
    }
    else if(k > 0 && k < n){
        return res(n-1, k-1) + res(n-1, k);
    }
}

int main (){
    int n, k;
    cin >> n >> k;
    cout<<res(n, k);




    return 0;
}