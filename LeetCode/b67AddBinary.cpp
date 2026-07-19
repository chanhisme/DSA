// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

#include <bits/stdc++.h>
using namespace std;


string addBinary(string a, string b){
    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;
    string res;
    while(i >= 0 || j >= 0 || carry){
        int bitA = 0, bitB = 0;

        if(i >= 0){
            bitA = a[i]-'0';
            i--;
        }
        if(j >= 0){
            bitB = b[j] - '0';
            j--;
        }

        int sum = bitA + bitB + carry;
        carry = sum / 2;
        res.push_back( (sum%2) + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a >> b;
    cout<<addBinary(a,b);



    return 0;
}