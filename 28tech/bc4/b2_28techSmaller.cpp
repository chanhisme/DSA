// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, 
//nhiệm vụ của bạn là đối với mỗi phần tử trong màng B[] 
//hãy đếm xem trong mảng A[] có bao nhiêu phần tử nhỏ hơn nó.
// Input Format
// Dòng đầu tiên là N và M
// Dòng 2 là N số trong măng A[]
// Dòng 3 là M số trong mảng B[]
// Constraints
// 1<=N,M<=10^7
// 1<=A[i], B[i]<= 10^9
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <int> a, b;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    
    int pA = 0;
    for(int i = 0; i < m; i++){
        while(pA < n && a[pA]<b[i]){
            pA++;
        }
        cout<<pA<<' ';
    }






    return 0;
}