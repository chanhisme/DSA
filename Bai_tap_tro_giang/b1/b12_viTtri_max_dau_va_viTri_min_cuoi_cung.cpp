#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    long long myMax = INT_MIN;
    int myMin = INT_MAX;

    for(int i = 0; i < n; i++){
        if(a[i] > myMax){
            myMax = a[i];
        }
        if(a[i] < myMin){
            myMin = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] == myMax){
            cout<<i<<endl;
            break;
        }
    }
    // for(int i = n-1; i >= 0; i --){
    //     if(a[i] == myMin){
    //     cout<<i<<endl;
    //     break;
    //     }
    // }
    int idx;
    for(int i = 0; i < n; i++){ //28tech
        if(a[i] <= myMin){
            idx = i;
        }
    }
    cout<<idx;


    return 0;
}