// 28tech rất yêu thích con số 28 vì thế anh ta có bài toán sau và nhờ bạn tìm lời giải. Cho một xâu kí tự S chỉ bao
// gồm kí tự 2 và kí tự 8, bạn hãy tìm xâu con liên tiếp có độ dài lớn nhất mà trong đó chứa nhiều nhất X kí tự 2
// và Y kí tự 8.

// Input Format

// . Dòng 1 chứa xâu S

// · Dòng 2 chứa 2 số X, Y
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string a;
    cin >> a;
    int x,y;
    cin >> x >> y;
    int cnt = -1;
    int c2 = 0, c8 = 0;
    int l = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '2'){
            c2++;
        }
        else if(a[i] == '8'){
            c8++;
        }
        while(c8 > y|| c2 > x){
            if(a[l] == '2'){
                c2--;
            }
            else if(a[l]=='8'){
                c8--;
            }
            l++;
        }
        int currLen = i-l+1;
        if( currLen > cnt){
            cnt = currLen;
        }
    }
    cout<<cnt;
    




    return 0;
}