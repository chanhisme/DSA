// Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu 1., ",, '!, ?, hãy liệt kê các
// từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách, sau từ cuối cùng ko được in thừa dấu cách

// Input Format

// Dòng duy nhất chứa xâu S

// Constraints

// 1 <= len(S) <= 10000; S chỉ bao gồm các chữ cái, dấu cách và các dấu câu đã liệt kê ở trên.

// Output Format

// Liệt kê các từ trong xâu


#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;

void trim(string &s){
    while(!s.empty() && s.front()== ' '){
        s.erase(s.begin());
    }
    while(!s.empty() && s.back() == ' '){
        s.pop_back();
    }
}
int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.' || s[i] ==',' || s[i] == '!' || s[i] == '?'){
            s[i] = ' ';
        }
    }
    trim(s);
    stringstream ss(s);
    string res; 
    while(ss >> res){
        cout<<res<<" ";
    }




    return 0;
}