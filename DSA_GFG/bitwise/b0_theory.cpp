// AND (&)
// OR (|)
// XOR (^)
// NOT (~)
// Left Shift (<<)
// Right Shift (>>)

#include <iostream>
#include <cmath>
using namespace std;
string IntToBit(int x){
    int b = log2(x);
    string res;
    for(int i = b; i >= 0; i--){
        // cout<< ((x >> i) & 1);
        if((x >> i) & 1){
            res.push_back('1');
        }
        else{
            res.push_back('0');
        }
    }
    return res;
}
int main(){
    int a = 7, b = 4;
    // 7 = bit: 111
    // 4 = bit: 100
    // 111
    // AND
    // 100
// res 100 = 4
    int res = a & b;
    cout<<res<<endl;
    int x = 8;
    //1000
    //tắt bit
    int bitOff;
    cin >> bitOff;
    cout<<IntToBit(x);



    return 0;
}