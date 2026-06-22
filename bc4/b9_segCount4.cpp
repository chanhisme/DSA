// Cho mảng A[] gồm N số nguyên và số nguyền K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các
// phần tử liên tiếp trong mằng mà độ chênh lệch giữa phần tử lớn nhất và phần tử nhỏ nhất trong máng con đó
// không vượt quá K

// Input Format

// · Dòng đầu tiên là N và K

// · Dòng thứ 2 là N số trong mằng A[i]

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){

    int n, k; cin >> n >> k;
    vector <int> a(n);
    multiset <int> sub;
    for(int &x : a){
        cin >> x;
    }
    int l = 0, r= 0;
    int dem = 0;
    for(; r < n; r ++){
        sub.insert(a[r]);
        while(sub.size() >= 1 && (*sub.rbegin() - *sub.begin()) > k){
            auto it = sub.find(a[l]);
            sub.erase(it);
            l++;
        }
        dem += (r - l + 1);
    }
    cout<<dem;




    return 0;
}