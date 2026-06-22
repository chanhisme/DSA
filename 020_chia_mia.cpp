//Nhập vào chiều dài a của một cây mía tính bằng cm. 
//Chia đều cây mía đó thành các đoạn có độ dài là b cm. 
//Hỏi chia được nhiều nhất mấy đoạn, đoạn còn dư có độ dài bao nhiêu cm.
#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int a; cin >> a;
    int b; cin >> b;
    int res1 = a/b;
    int res2 = a%b;
    cout<<res1<<" "<<res2;






    return 0;
}