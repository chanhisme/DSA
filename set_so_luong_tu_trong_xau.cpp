#include <iostream>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string> a;
    string s;
    while(cin >> s){ //dùng cin để nó ko đọc dc space mà tách ra thành từng từ từ 1 câu
        a.insert(s); //dùng enter rồi bấm ctrl Z để chạy
    }
    cout<<a.size()<<endl;
    auto itMax = a.rbegin();
    auto itMin = a.begin();
    cout<<*itMin<<" "<<*itMax; 


    return 0;
}