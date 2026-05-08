#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int k; cin >> k;
    int left = 0, right = n - 1;
    while (left < right){
        int sum = a[left] + a[right];
        if(sum > k){
            right --;
        }
        else if(sum < k){
            left++;
        }
        else{
            int valLeft = a[left], valRight = a[right];
            int cntLeft = 0, cntRight = 0;
            while(left < n && a[left] == valLeft){
                left ++;
                cntLeft ++;
            }
            while(right >= 0 && valRight == a[right]){
                right --;
                cntRight ++;
            }
            if(valLeft == valRight){
                cnt += cntLeft * (cntLeft - 1) / 2;
            }
            else{
                cnt += cntLeft * cntRight;
            }
        }
    }
cout<<cnt;


    return 0;
}