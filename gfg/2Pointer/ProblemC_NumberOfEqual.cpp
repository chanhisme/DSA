#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &x : a)cin >> x;
    for(int &x : b) cin >> x;
    int pA = 0, pB = 0;
    int cnt = 0;
    while(pA < n && pB < m){
        if(a[pA] < b[pB]){
            pA ++;
        }
        else if(b[pB] < a[pA]){
            pB ++;
        }
        else{
            int x = a[pA];
            long long cA = 0, cB =0;
            while(pA < n && a[pA] == x){
                cA++;
                pA ++;
            }
            while( pB < m && b[pB] == x){
                cB ++;
                pB ++;
            }
            cnt+= cB * cA;
        }
    }
    cout<<cnt;

    return 0;
}