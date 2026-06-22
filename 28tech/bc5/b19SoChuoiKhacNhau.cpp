// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác
// nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH". (Bài này các
// bạn có thế thử code 2 vòng for lồng nhau hoặc sử dụng sort)

// Input Format

// Dòng duy nhất chứa xâu S

// Constraints

// 1 <= len(S) <= 10000; S chứa kí tự là chữ cái, chữ số và dấu cách.

// Output Format

// In ra số lượng từ khác nhau trong xâu
#include <iostream>
#include <ctype.h>
#include <cstring>
#include <unordered_set>
using namespace std;

string myLower(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_set <string> a; 
    string s;
    while(cin >> s){
        myLower(s);
        a.insert(s);
    }
    cout<<a.size();





    return 0;
}