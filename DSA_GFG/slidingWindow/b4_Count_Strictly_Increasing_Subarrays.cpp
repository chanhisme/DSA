// Given an integer array arr[], the task is to count the number of subarrays in arr[] 
// that are strictly increasing and have a size of at least 2. A subarray is a contiguous sequence of elements from arr[].
//  A subarray is strictly increasing if each element is greater than its previous element.

#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //mainCode
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a) cin >> x;
    int cnt = 0;
    int l=0, r = 1;
    int len = 1;
    while(r < n){
        if(a[r] > a[r-1]){
            len++;            
        }
        else{
            cnt += (len*(len - 1)) / 2;
            len = 1;
        }
        r++;
    }
    //do chỉ cộng trong nhanh else nên khúc cuối phải cộng thêm nữa
    cnt += (len*(len - 1)) / 2;
    cout<<cnt;





    return 0;
}