// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là trộn 2
// mắng này thành một mảng và sắp xếp theo thứ tự tăng dần. Độ phức tạp mong muốn là tuyến tính.

// Input Format

// . Dòng đầu tiên là N và M

// · Dòng 2 là N số trong mằng A[]

// · Dòng 3 là M số trọng mằng B[]

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    vector <int> b;
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    int pA = 0, pB = 0;
    while(pA < a.size() && pB < b.size()){
        if(a[pA] < b[pB]){
            cout<<a[pA]<<' ';
            pA ++;
        }
        else if(b[pB] < a[pA]){
            cout<<b[pB]<<' ';
            pB ++;
        }
        else{
            cout<<b[pB]<<' '<<a[pA]<<' ';
            pA ++; pB ++;
        }
    }
    while(pA < a.size()){
        cout<<a[pA]<<' ';
        pA++;
    }
    while(pB < b.size()){
        cout<<b[pB]<<' ';
        pB++;
    }






    return 0;
}

