#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    
    for(int i = 0; i < n - 1; i++){
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[minIdx]){ //đổi chiều dấu so sánh sẽ đổi chiều sort
                minIdx = j;
            }
        }
        
        swap(a[i], a[minIdx]);
    }

    
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }




    return 0;
}