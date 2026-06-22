#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int myMax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > myMax){
            cout<<a[i]<<" ";
            myMax = a[i];
        }
    }

    return 0;
}