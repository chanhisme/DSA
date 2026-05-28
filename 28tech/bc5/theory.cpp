#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string sub = "anh";
    string a = "chanh";
    string num = "12123123123";
    string intNum = "123";
    if(a.find(sub) != string::npos){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    int m = stoi(intNum);
    long long n = stoll(num);
    cout<<n+ 1<<endl;
    cout<<m+1<<endl;
    string res = to_string(m);
    cout<<res;
    



    return 0;
}