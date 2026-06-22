#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n,m; cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a){
        cin >> x;
    }
    for(int &x : b){
        cin >> x;
    }
    int pA = 0;
    for(int i = 0; i < m; i++){
        while(pA < n && a[pA] < b[i] ){
            pA++;
        }
        cout<<pA<<' ';
    }


    return 0;
}