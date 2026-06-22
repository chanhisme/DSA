#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main (){
    vector <int> a;
    int n; cin >> n;
    if(n < 2){
        cout << "Khong du phan tu";
        return 0;
    }

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    ////Cách 1:
    // sort(a.begin(), a.end());
    // int max1 = a[n-1];
    // int max2 = a[n-2];
    // cout<<max1<<" "<<max2;

    //Cách 2:
    int max1 = INT_MIN;
    int max2 = max1;
    for(int i = 0; i < n; i++){
        if(a[i] >= max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] < max1 && a[i] > max2){
            max2 = a[i];
        }
    }
    cout<<max1<<" "<<max2;




    return 0;
}