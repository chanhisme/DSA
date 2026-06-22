// Cho mảng A[l gồm N phần tử, hãy tìm 2 chỉ số i, j khác nhau sao cho 0 <= i <j < N và trị
// tuyệt đối tổng của 2 phần tử A[i] và A[j] đạt giá trị lớn nhất.
// Input Format
// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
// Constraints
// 2 <= N <= 10^6;
// -10^9 <= A[i] <= 10^9
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    long myMax1 = abs(a[0] + a[1]);
    long myMax2 = abs(a[n-1] + a[n-2]);
    (myMax1 >= myMax2) ? cout<<myMax1 : cout<<myMax2;





    return 0;
}