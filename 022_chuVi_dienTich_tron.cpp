// Nhập vào bán kính r của một hình tròn, tính chu vi và diện tích hình tròn đó theo công thức:
// . Chu vi cv = rx2x3.14
// . Diện tích dt = rxrx3.14
#include <iostream>
#include <iomanip>
#define pi 3.14
using namespace std;
int main(){
    int r; cin >> r;
    float cv = r*2*pi;
    float dt = r*r*pi;
    cout<<fixed<<setprecision(2)<<cv<<" "<<dt;






    return 0;
} 