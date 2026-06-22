#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i ++){
        int x; cin >> x;
        a.insert(x);
    }
    int k; cin >> k;
    if(a.find(k) != a.end()){
        a.erase(k);
    }
    else{
        cout<<"404\n";
    }
    auto it = a.begin();
    auto itMax = a.end();
    --itMax;
    cout<<"MAX: "<<*itMax<<endl;
    cout<<"MIN: "<<*it;





    return 0;
}