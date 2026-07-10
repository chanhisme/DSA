// https://wiki.vnoi.info/algo/math/modulo
#include <iostream>


using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
} //logn
long long lcm(int a, int b){
    return (long long)abs(a) / gcd(a,b) * abs(b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout<<gcd(a,b)<<'\n';
    cout<<lcm(a,b);








    return 0;
}