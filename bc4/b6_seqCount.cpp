// Cho mảng A[] gồm N số nguyên và số nguyên S. 
//nhiệm vụ của bạn là đếm xem có bao nhiêu máng con các phần tử liên tiếp trong mảng mà tống không vượt quá S.
// Input Format
// Dòng đầu tiên là N và S
// Dòng thứ 2 là N số trong mảng A[]

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, s; cin >> n >> s;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int l = 0; 
    int sum = 0;
    int cnt = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        cnt += (r - l + 1);
    }
    cout<<cnt;


    return 0;
}