// A. Word Capitalization
// time limit per test2 seconds
// memory limit per test256 megabytes
// Capitalization is writing a word with its first letter as a capital letter. 
// Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. 
// The length of the word will not exceed 10^3.

// Output
// Output the given word after capitalization.

#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    s[0] = toupper(s[0]);
    cout<<s;






    return 0;
}