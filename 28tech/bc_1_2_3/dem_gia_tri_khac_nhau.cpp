#include <iostream>
#include <set>
using namespace std;
int main (){
    set <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i ++){
        int x; cin >> x;
        a.insert(x);
    }
    cout<<a.size();


    return 0;
}