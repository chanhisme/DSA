#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;

    for(int i = 1; i < n; i++){
        int val = a[i];
        int idx = i - 1;
        while(idx >= 0 && a[idx] > val){
            a[idx + 1] = a[idx];
            idx --;
        }
        a[idx + 1] = val;
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }




    return 0;
}