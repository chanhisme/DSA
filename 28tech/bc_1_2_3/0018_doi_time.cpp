#include <iostream>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //MainCode
    int n; cin >>n;
    int hour = n /3600;
    n = n % 3600;
    int minutes = n / 60;
    n = n % 60;
    int second = n;
    cout<<hour<<":"<<minutes<<":"<<second;



    return 0;
}