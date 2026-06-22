// Cho 2 mảng A[] và B có N và M phần từ đã được sắp xếp theo thứ tự tăng dần, 
// nhiệm vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cập i, j sao cho A[I] = B[j]
// Input Format
// Dòng đầu tiên là N và M
// Dòng 2 là N số trong mảng A[]
// Dòng 3 là M số trong mảng B[]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    //mainCode
    int n, m; cin >> n >> m;
    vector <int> a,b;
    int pA = 0, pB = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    long dem = 0;
    while(pA < n && pB < m){
        if(a[pA] > b[pB] ){
            pB++;
        }
        else if(a[pA] < b[pB] ){
            pA ++;
        }
        else{
            int key = a[pA];
            long cntA = 0, cntB = 0;
            while(pA < n && a[pA] == key){
                cntA++;
                pA++;
            }
            while(pB < m && b[pB] == key){
                cntB++;
                pB++;
            }
            dem += 1LL * cntA * cntB;
        }
    }
    cout<<dem;
    




    return 0;
}