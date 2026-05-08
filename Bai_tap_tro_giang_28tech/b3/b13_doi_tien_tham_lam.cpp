#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector <int> a = {1,2,5,10,20};
    int dem =0;
    int n; cin >> n;
    for(int i = a.size()-1; i >= 0; i-- ){
        dem += (n  / a[i]);
        n = n % a[i];
    }

    cout<<dem;


    return 0;
}