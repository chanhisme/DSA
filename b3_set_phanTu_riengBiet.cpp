#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main (){
    vector<int> a;
    int n; cin >> n;
    for(int i = 0 ; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    set<int> s;

    for(int i = 0; i < n; i++){
        if(s.find(a[i]) == s.end()){ //chạy thì nếu thấy thằng nào thì in ra nếu trùng thì ko in
            cout<<a[i]<<" ";
        }
        s.insert(a[i]);   
    }
        





    return 0;
}