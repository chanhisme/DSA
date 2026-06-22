#include <iostream>
#include <vector>
using namespace std;

int main(){
   
    vector <int> a;
    int n; 
    while(cin >> n){
        a.push_back(n);
    }
    vector <int> preS(a.size());
    preS[0] = a[0];
    for(int i = 1; i < a.size(); i++){
        preS[i] = preS[i-1] + a[i];
    }
    for(int i = 0; i < preS.size(); i++){
        cout<<preS[i]<<" ";
    }
    cout<<endl;
    int q; cin >> q;
    while(q > 0){
        int left, right; cin >> left >> right;
        if(left == 0){
            cout<<preS[right]<<endl;
        }
        else{
            cout<<preS[right] - preS[left - 1]<<endl;
        }
        q--;
    }


    return 0;
}