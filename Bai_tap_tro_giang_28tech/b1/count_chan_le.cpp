#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int cnt_chan = 0, cnt_le = 0;
    int s_chan = 0, s_le = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cnt_chan ++;
            s_chan += a[i];
        }
        else{
            cnt_le ++;
            s_le += a[i];
        }
    }
    cout<<cnt_chan<<endl<<cnt_le<<endl;
    cout<<s_chan<<endl<<s_le;
  




    return 0;
}