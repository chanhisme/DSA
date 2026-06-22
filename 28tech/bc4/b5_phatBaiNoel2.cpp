// Nhân dịp lễ Giáng Sinh 2022, 28Tech tổ chức phát quà cho các bạn nhỏ. 
//Có N món quà được xếp thành hàng ngang, mỗi món quả đều có khối lượng cho trước. 
//Tí là một đứa trẻ không như nhiều đứa trẻ khác. 
//Tí chỉ muốn chọn ít phần quà càng tốt miễn là tống các phần quà này lớn hơn hoặc bằng s. 
//Tí chỉ có thể lựa chọn các phần quà đặt cạnh nhau, 
//bạn hãy xác định xem Tí có thể chọn tối thiểu bao nhiêu phần quà đề tổng khối lượng của các phần quà lớn hơn hoặc bằng S.
// Input Format
// Dòng đầu tiên là N và S
// Dòng thứ 2 là trọng lượng của N phần quà

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, s; cin >> n >> s;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int minLen = n+1;
    int sum = 0, i = 0;
    for(int f = 0; f < n; f++){
        sum += a[f];

        while(sum >= s){
            int currLen = f-i+1;
            sum -= a[i];
            i++;
            if(currLen < minLen){
                minLen = currLen;
            }
        }
        
    }
    if(minLen != n+1){
        cout<<minLen;
    }
    else{
        cout<<-1;
    }




    return 0;
}