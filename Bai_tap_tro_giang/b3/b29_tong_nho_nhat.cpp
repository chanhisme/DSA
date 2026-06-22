// Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số
// được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng
// để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số 0 đứng đầu thì bạn có thể loại bỏ
// các số 0 vô nghĩa đó.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i ++){
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    int num1=0, num2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2==0){
            num1 *= 10;
            num1 += a[i];
        }
        else{
            num2 *= 10;
            num2 +=a[i];
        }
    }
    cout<<num1+num2;

    return 0;
}