#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    long long total = 0;
    for(int &x : a){
        cin >> x;
        total += x;
    }
    long long target = total - k;
    unordered_map <int, int> cnt;
    long long sum = 0;
    //chủ động gán để đếm
    cnt[0] = -1;
    int maxLen = -1;
    for(int i = 0; i < n; i ++){
        sum += a[i];
        if(cnt.count(sum - target)){
            maxLen = max(maxLen, i - cnt[sum-target]);
        }
        if(!cnt.count(sum)){
            cnt[sum] = i;
        }
    }
    if(maxLen == -1) cout<< -1;
    else cout<<n - maxLen; //để in ra số phần tử đã xóa maxLen chỉ là số phần tử dài nhất trong mảng con



    return 0;
}