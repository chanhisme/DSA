#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector <int> a;
    int n, k; cin >> n >> k;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    if(k > n){
        k = k % n;
    }

    // //***BRUTAL FORCE***
    // for(int i = 0; i < k; i++){
    //     int tmp = a[0];
    //     for(int j = 0; j < n-1; j++){
    //         a[j] = a[j+1];
    //     }
    //     a[n-1] = tmp;
    // }

    // //***OK HƠN***
    // vector <int> tmp(n, 0);
    // for(int i = n-1; i >= 0; i--){
    //     int newIdx = (i - k + n) % n;
    //     tmp[newIdx] = a[i]; 
    // }
    // for(int i = 0; i < n; i++){
    //     a[i] = tmp[i];
    //     cout<<a[i]<<" ";
    // }

    //***REVERSE METHOD***
    reverse(a.begin(), a.begin()+k);
    reverse(a.begin()+k, a.end());
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }



    return 0;
}