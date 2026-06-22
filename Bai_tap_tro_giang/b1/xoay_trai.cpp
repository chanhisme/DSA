#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector <int> a;
    int n; cin >> n;
    int k; cin >> k;
    k = k % n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    vector <int> b(n, 0);
    for(int i = 0; i < n; i++){
        int newIdx =  (i - k + n) % n;
        b[newIdx] = a[i];
    }
    for(int i = 0; i < n; i++){
        a[i] = b[i];
        cout<<a[i]<<" ";
    }








    return 0;
}