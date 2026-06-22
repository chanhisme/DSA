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
    int k; cin >> k;
    int cnt_be = 0, cnt_ln = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > k){
            cnt_ln ++;
        }
        else if(a[i] < k){
            cnt_be++;
        }
    }
    cout<<cnt_be<<endl<<cnt_ln;






    return 0;
}   