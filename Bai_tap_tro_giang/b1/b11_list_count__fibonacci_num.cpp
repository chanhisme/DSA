#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//vòng lặp sinh dãy
bool isFib (int n){
    if(n == 0 || n == 1){
        return true;
    }
    int a = 0, b = 1, c;
    while(true){
        c = a + b;
        if(c == n){
            return true;
        }
        if (c > n){
            return false;
        }
        a = b;
        b = c;
    }
}

//công thức
bool fib(int n){
    long long a = 5LL * n * n + 4;
    long long b = 5LL * n * n - 4;

    long long resA = sqrt(a);
    long long resB = sqrt(b);

    return (resA*resA == a || resB*resB == b); 
}

int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        // if(isFib(a[i]))
        if(fib(a[i]) == true){
            cout<<a[i]<<" ";
            cnt ++;
        }
    }

    if(cnt < 1){
        cout<<"NONE";
    }










    return 0;
}