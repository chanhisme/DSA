// Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng
// lên 1 vài đơn vị, hãy xác định số đơn vị tối thiểu cần thêm vào các phần tử trong mảng sao
// cho mảng trở thành một dãy tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng
// dãy 1 2 2 7 8 không phải là một dãy tăng chặt.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    long long q = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            q += a[i-1] - a[i] + 1;
            a[i]+= a[i-1]-a[i]+1;
        }
    }
    cout<<q;






    return 0;
}