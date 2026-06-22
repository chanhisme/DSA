// Trường em mới được xây thêm ba phòng, 
// do có một số lớp với sĩ số quá đông nên 
// nhà trường tiến hành tách ra, hiện tại 
// ba phòng mới này chưa có bàn. Cho a, b, c là số
// lượng học sinh của ba lớp mới, 
// tính số bàn cần mua ít nhat, biet rằng mỗi bàn ngoi 
// được nhiều nhất 2 học sinh.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b>>c;
    int cnt = 0;
    cnt  += ceil(a/2.00);
    cnt+=ceil(b/2.00);
    cnt+= ceil(c/2.00);
    cout<<cnt;
    



    return 0;
}