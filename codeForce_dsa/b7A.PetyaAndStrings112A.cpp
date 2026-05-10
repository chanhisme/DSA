// A. Petya and Strings
// time limit per test2 seconds
// memory limit per test256 megabytes
// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
// The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. 
// The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. 
// It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". 
// If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int ok = 0;
    for(int i = 0; i < s1.size(); i++){
        s1[i] = towlower(s1[i]);
        s2[i] = tolower(s2[i]);
        if(s1[i] < s2[i]){
            ok = -1;
            break;
        }
        else if(s1[i] > s2[i]){
            ok = 1;
            break;
        }
    }
    cout<<ok;







    return 0;
}