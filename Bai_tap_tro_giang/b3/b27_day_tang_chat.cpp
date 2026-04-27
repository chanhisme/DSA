// Cho dãy số A[l gồm có chần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng
// lên 1 lượng là d đơn vị, hãy xác định số thao tác tối thiểu sao cho mảng trở thành một dãy
// tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một
// dãy tăng chặt. Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần thực hiện thao tác thứ
// nhất thêm d vào phần tử thứ 3 trong mảng, mảng trở thành 1 3 5 2, ta tiếp thục thực hiện
// 2 thao tác thêm d vào phần tử thứ 4, mảng trở thành dãy tăng chặt là 1 3 5 6
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ////mainCode
    int n, d; cin >> n >> d;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    long long q= 0 ;
    for(int  i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            int diff = (a[i-1] - a[i] + 1);
            a[i] += diff;
            q += ceil((double)diff/d);
        }
    }
    cout<<q;



    return 0;
}