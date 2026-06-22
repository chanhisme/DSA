#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long //define name -> data type
const long long MOD = 1e9 + 7;
int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    // e = "exponent" (số mũ) trong ký hiệu khoa học!
    ll tong = 0;
    ll tich = 1;
    for(int i = 0; i < n; i++){
        tong += a[i];
        tong %= MOD;
        
        tich *= a[i];
        tich %= MOD;
    }
    cout<<tong<<endl<<tich;




    return 0;
}