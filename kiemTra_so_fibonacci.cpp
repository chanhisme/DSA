#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isFib(int n ){
    if(n == 0 || n == 1){
        return  true;
    }
    int a = 0, b = 1, c;
    while(true){
        c = a+b;
        if(c == n){
            return true;
        }
        if(c > n){
            return false;
        }
        a = b;
        b = c;

    }
}
int main (){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    
    cout << "Fibonacci numbers in array: ";
    for(int i = 0; i < n; i++){
        if(isFib(a[i])){
            cout << a[i] << " ";
        }
    }



    return 0;
}