///2 số là cặp số nguyên tố bằng nhau khi ước chung = 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gdc(int a, int b){
    if(b==0){
        return a;
    }
    return gdc(b, a%b);
}


int main(){
    int n; cin >> n;
    vector <int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    int cnt = 0; 
    for(int i = 0; i < n; i ++){
        for(int j = i+1; j < n; j++){
            if(gdc(a[i], a[j]) == 1){
                cnt++;
            }
        }
    }
    cout<<cnt;




    return 0;
}