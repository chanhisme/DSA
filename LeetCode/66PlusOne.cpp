#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int myInt(char c){
    return c - '0';
}
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int &x : a ) cin >> x;
    for(int i = n-1; i >= 0; i--){
        if(a[i] < 9){
            a[i]++;
            break;
        }
        else{
            a[i] = 0;
        }
    }
    if(a[0] == 0){
        a.insert(a.begin(), 1);
    }
    for(int x : a) cout<<x;

    return 0;
}