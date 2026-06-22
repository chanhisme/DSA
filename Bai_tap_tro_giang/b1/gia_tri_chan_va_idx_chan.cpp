#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < n; i += 2){
        if(a[i] % 2 ==0){
            cout<<a[i]<<" ";
            cnt++;
        }
    }
    if(cnt <= 0){
        cout<<"NONE";
    }





    return 0;

}