// Nhân dịp lễ Giáng Sinh 2022, 28Tech tổ chức phát quà cho các bạn nhỏ. 
//Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. 
//Tèo là một đứa trẻ cũng như nhiều đứa trẻ khác chỉ muốn có càng nhiều phần quà càng tốt, 
//không cần biết tới khối lượng của từng mốn quà nặng nhẹ ra sao.
// Tuy nhiên chiếc túi của Tèo chỉ mảng được trọng lượng tối đa là S. 
//Bạn hãy xác định xem số lượng phần quà mà Tèo có thể lựa chọn tối đa 
//là bao nhiêu để có thể không vượt quá trọng lượng tối đa mà cái túi có thể chịu được. 
//Ngoài ra trong lúc chọn quà Tèo chỉ có thể chọn các phần quà xếp cạnh nhau mà thôi.
// Input Format
// Dòng đầu tiên là N và s
// Dòng thứ 2 là trọng lượng của N phần quà

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int sum = 0, cnt = 0;
    vector<int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int maxLen = -1;
    int i = 0;
    for(int f = 0; f < n; f++){
        sum += a[f];
        while(sum > s){
            sum -= a[i];
            i++;
        }

        int arrLen = f-i+1;
        if(arrLen > maxLen){
            maxLen = arrLen; 
        }
        
    }
    cout<<maxLen;




    return 0;
}