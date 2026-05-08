#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector <int> a;
    int n ; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int slow = 0;
    for(int fast = 1; fast < n; fast ++){
        if(a[fast] != a[slow]){
            slow ++;
            a[slow] = a[fast];
        }
    }
    for(int i =  0; i < slow + 1; i++){
        cout<<a[i]<<" ";
    }



    return 0;
}