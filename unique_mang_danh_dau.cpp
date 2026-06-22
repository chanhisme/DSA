#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (){
    vector <int> a;
    int n ; cin >> n;
    for(int i = 0 ; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int maxVal = INT_MIN;
    for(int i = 0; i < n; i ++){
        if(a[i] > maxVal){
            maxVal = a[i];
        }
    }
    vector <int> cnt(maxVal + 1, 0);
    for(int i = 0; i < a.size(); i++){
        cnt[a[i]] = 1;
    }
    for(int i = 0; i < cnt.size(); i++){
        if(cnt[i] == 1){
            cout<<i<<" ";
        }
    }




    return 0;

}