#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int isFound = 0;
    int l=1, r=n-1;
    //Cách 1
    sort(a.begin(), a.end());
    for(int i = 0; i < 2; i++){
        int target = k - a[i];
        while(l < r){
            if(a[l] + a[r] < target){
                l++;
            }
            else if(a[l] + a[r] > target){
                r--;
            }
            else{
                isFound = 1;
                break;
            }
        }
    }
    

    if(isFound){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}