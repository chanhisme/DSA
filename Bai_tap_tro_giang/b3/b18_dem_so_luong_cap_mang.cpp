//Đề bài: in ra số cặp giống nhau có trong dãy --> in ra số cặp giống nhau
//dùng tổ hợp chập k của 2 tức chọn 2 phần tử trong tập hợp k phần tử

#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //mainCode
    int n; cin >> n;
    int a[n];
    unordered_map<int, int> cnt;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]] ++;
    }
    int res = 0;
    for(auto &x : cnt){
        if(x.second > 0){
            res += x.second * (x.second - 1) / 2;
        }
    }
    cout<<res;

    return 0;
}