#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int findMax( const vector <int> &a, int n){
    int res = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > res){
            res = a[i];
        }
    }
return res;
}
int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int maxVal = findMax(a, n);
    vector <bool> isPrime(maxVal+1, true);
    isPrime [0] = isPrime[1] = false;
    int cnt = 0;
    int sum = 0;
    for(int i = 2; i*i <= maxVal; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= maxVal; j+=i){
                isPrime[j] = false;
            }
        }
    }
    
    for(int i = 0; i < n;i ++){
        if(isPrime[a[i]]){
            cnt++;
            sum += a[i];
        }
    }
    cout<< (double) sum / cnt;




    return 0;
}