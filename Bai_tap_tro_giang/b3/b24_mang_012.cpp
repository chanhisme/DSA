// Cho dãy số AIl gồm có N phần tử, các phần tử trong mảng chỉ là 0, 1 hoặc 2. Hãy sắp xếp
// các phần tử trong mảng theo thứ tự tăng dần.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ///mainCode
    // //cách 1
    // int n; cin >> n;
    // vector <int> a;
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     a.push_back(x);
    // }
    // sort(a.begin(), a.end());
    // for(int i  =  0; i < n; i++){
    //     cout<<a[i]<<" ";
    // }

    //Cách 2 = counting sort
    // int n; cin >> n;
    // vector <int> a;
    // vector<int> cnt(3, 0);
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     a.push_back(x);
    //     cnt[x]++;
    // }
    // for(int i = 0; i < cnt.size(); i++){
    //     while(cnt[i]--){
    //         cout<<i<<" ";
    //     }
    // }
    //cách 3 = 2 con trỏ
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int l = 0, r = n-1, m = 0;
    while(m <= r){
        if(a[m] == 0){
            swap(a[m], a[l]);
            l++; m++;
        }
        else if(a[m] == 2){
            swap(a[m], a[r]);
            r --;
        }
        else{
            m++;
        }
        
    }
    for(int i  =  0; i < n; i++){
            cout<<a[i]<<" ";
    }
    return 0;
}