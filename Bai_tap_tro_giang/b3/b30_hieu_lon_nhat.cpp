// Cho mảng A[l gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng AI]
// thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất.
// Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai
// mảng {4, 2} và {8, 5,10] có hiệu của hai mảng con là 23-6=17 là lớn nhất.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    vector <int> a;
    int n, k; cin >> n >> k;
    k = min(k, n - k);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    long sB =0, sA = 0;
    for(int i = k; i < n;i++){
        sA +=a[i];
    }
    for(int i = 0; i < k;i++){
        sB += a[i];
    }
    cout<<abs(sB-sA);




    return 0;
}