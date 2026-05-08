// Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là 
//tìm khoảng cách
// lớn nhất giữa 2 chỉ số i, j sao cho trị tuyệt đối của
// hiệu A[i] - A[j] bằng K.
// Input Format
// Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];
// Constraints
// 1 <= K <= N <= 10^6 ;- 10^6 <= A[i] <= 10^6;
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //mainCode
    int n, k; cin >> n >> k;
    unordered_map<int, int> mp;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int res = -1;
    for(int i = 0; i < n; i++){
        int target1 = a[i] + k;
        int target2 = a[i] - k;
        if(mp.count(target1)){
            res = max(res, i - mp[target1]);
        }
        if(mp.count(target2)){
            res = max(res, i - mp[target2]);
        }
        if(mp.count(a[i]) == 0){
            mp[a[i]] = i;
        }
        
    }

    cout<<res;




    return 0;
}