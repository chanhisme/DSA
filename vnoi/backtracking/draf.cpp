#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        a.push_back(i % 2);
        cout<<a[i]<<' ';
    }




    return 0;
}