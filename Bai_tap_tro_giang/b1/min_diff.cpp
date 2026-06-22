#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int minDiff = INT_MAX;
    int fast = 1, slow = 0;
    if (n < 2) {
        cout << 0;
        return 0;
    }

    while(fast < n){
        int currDiff = abs(a[fast] - a[slow]);
        if(currDiff < minDiff){
            minDiff = currDiff;   
        }
    fast++; slow++;
    }
cout<<minDiff;


    return 0;
}