// AND (&)
// OR (|)
// XOR (^)
// NOT (~)
// Left Shift (<<)
// Right Shift (>>)

#include <iostream>
using namespace std;

int main(){
    int a = 7, b = 4;
    // 7 = bit: 111
    // 4 = bit: 100
    // 111
    // AND
    // 100
// res 100 = 4
    int res = a & b;
    cout<<res;




    return 0;
}