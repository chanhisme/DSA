// Cho mảng A[] gồm N phần tử. Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới
// bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì
// vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long mod = 1e9+7;

int main(){
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    
    long long s = 0;
    for(int i = 0; i < n; i++){
        long long p = 1;
        p *= 1LL * a[i] * i;
        p %= mod;
        s += p;
        s %= mod;
    }
    cout<<s;




    return 0;
}