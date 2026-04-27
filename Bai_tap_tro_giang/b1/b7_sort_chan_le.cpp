#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    int left = 0, right = n - 1;
    while(left < right){
       
        while(left<right&&a[left] % 2 != 0){
            left++;
        }
        while(left<right&&a[right] % 2 == 0){
            right --;
        }
         if(left < right){
            swap(a[left], a[right]);
            left++; right--;
        }
    }
    sort(a.begin(), a.begin()+left, greater<int>());
    sort(a.begin()+left, a.end());

    for(int x : a){
        cout<<x<<" ";
    }




    return 0;
}