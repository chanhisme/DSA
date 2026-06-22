#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int w = n-i;
        for(int j = 0; j < w-1; j++){
            cout<<" ";
        }
        for(int j = 0; j <= i*2; j++){
            cout<<"*";
        }
        cout<<'\n';
    }




    return 0;
}