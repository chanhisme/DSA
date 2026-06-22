#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    // vector <int> a;
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     a.push_back(x);
    // }
    // sort(a.begin(), a.end());
    // int k; cin >> k;
    // int left = 0, right = n - 1;
    
    // int found = 0;
    // while(left <= right){
    //     int mid = left + (right - left) / 2;
    //     if(k > a[mid]){
    //         left = mid + 1;
    //     }
    //     else if(k < a[mid]){
    //         right = mid - 1;
    //     }
    //     else{
    //         found = 1;
    //         break;
    //     }
    // }


    // if(found == 1){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }

    set <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    int k; cin >> k;
    if(a.find(k) != a.end()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}