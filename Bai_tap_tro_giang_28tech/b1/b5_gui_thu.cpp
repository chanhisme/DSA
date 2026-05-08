#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    
    for(int i = 0; i < n; i++){
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
        if(i == 0){
            minVal = min(minVal, a[i+1] - a[i]);
            cout<<minVal<<" ";
            maxVal = max(maxVal, a[n-1] - a[i]);
            cout<<maxVal<<endl;
        }
        else if(i == n-1){
            minVal = min(minVal, a[i] - a[i-1]);
            cout<<minVal<<" ";
            maxVal = max(maxVal, a[i] - a[0]);
            cout<<maxVal<<endl;
        }
        else{
            minVal = min(a[i]-a[i-1], a[i+1] - a[i]);
            cout<<minVal<<" ";
            maxVal = max(a[i]-a[0], a[n-1] - a[i]);
            cout<<maxVal<<endl;
        }
    }






    return 0;
}