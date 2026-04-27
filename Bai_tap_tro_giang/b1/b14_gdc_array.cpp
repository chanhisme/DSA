#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int res(int a, int b){
    while(b > 0){
        int t = a % b;
        a = b;
        b = t;
    }
return a;

}

int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int gdc = a[0];
    for(int i  = 1; i  < n; i++){
        gdc = res(gdc, a[i]);
    }
    cout<<gdc;
    




    return 0;
}