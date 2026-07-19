// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Constraints:

// -2^31 <= x <= 2^31 - 1
#include <bits/stdc++.h>
using namespace std;

bool Palindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int tmp = 0;

    while (x > tmp)
    {
        tmp = tmp * 10 + (x % 10);
        x /= 10;
    }
    if (x == tmp || x == tmp / 10)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(Palindrome(n)) cout<<"true";
    else cout<<"false";
    return 0;
}