// Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa
// vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí chỉ số lẻ. Đồng thời, dãy A
// được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ///mainCode
    int n; cin >> n;
    vector <int> a;
    vector <int> b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    vector <int> res;
    for(int i = 0; i < n; i++){
        res.push_back(a[i]);
        res.push_back(b[i]);
    }
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    


    return 0;
}