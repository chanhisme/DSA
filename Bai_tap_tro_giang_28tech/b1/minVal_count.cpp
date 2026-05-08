#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    vector <int> a;
    int n ; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int minVal = INT_MAX;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < minVal){
            minVal = a[i];
            cnt = 1;
        }
        else if(minVal == a[i]){
            cnt++;
        }
    }
    cout<<cnt;






    return 0;
}