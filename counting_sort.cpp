#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
// xài dc giá trị vừa và nhỏ
// ko xài dc giá trị âm
int main (){
    int myMax = INT_MIN;
    vector <int> a = {1,4,6,4,20};
    int res = 0;
    for(int i = 0; i < a.size(); i++){
            if(a[i] > myMax){
                myMax = a[i];
            }
    }
    vector <int> cnt(myMax+1, 0);
    for(int i = 0; i < a.size(); i++){
        cnt[a[i]] = 1;
    }

    for(int i = 0; i <= myMax; i++){
        if(cnt[i] == 1){
            res++;
        }
    }
    cout<<res;



    return 0 ;
}