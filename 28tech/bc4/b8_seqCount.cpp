// Cho mảng A[] gồm N số nguyên và số nguyên K, 
//nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong màng mà số lượng phần tử khác nhau 
//trong mảng con này không vượt quả K.
// Input Format
// Dòng đầu tiên là N và K
// Dòng thứ 2 là N số trong màng A[]

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    unordered_map <int, int> cnt;
    int l = 0;
    long long dem = 0;
    for(int r= 0; r < n; r++){
        cnt[a[r]]++;
        while(cnt.size() > k){
            cnt[a[l]] --;
            if(cnt[a[l]] == 0){
                cnt.erase(a[l]);
            }
            l++;
        }
        dem+= (r  - l + 1);
        
    }
    cout<<dem;




    return 0;
}