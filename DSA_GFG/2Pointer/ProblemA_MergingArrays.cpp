#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a){
        cin >> x;
    }
    for(int &x : b){
        cin >> x;
    }
    int p1 = 0, p2 = 0;
    while(p1 < n && p2 < m){
        if(a[p1] < b[p2]){
            cout<<a[p1]<<' ';
            p1++;
        }
        else if(b[p2] < a[p1]){
            cout<<b[p2]<<' ';
            p2 ++;
        }
        else{
            cout<<b[p2]<<' '<<a[p1]<<' ';
            p1++;p2++;
        }
    }
    while(p1 < n){
        cout<<a[p1]<<' ';
        p1++;
    }
    while(p2 < m){
        cout<<b[p2]<<' ';
        p2++;
    }




    return 0;
}