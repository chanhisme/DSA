#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,  int> cnt;
    vector <int> a;
    int n;
    while(cin >> n){
        a.push_back(n);
        cnt[n] ++;
    }
    int currMax = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > currMax){
            currMax = a[i];
        }
    }
    vector <bool> isPrime(currMax+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i*i <= currMax; i++){
        if(isPrime[i] == true){
            for(int j = i*i; j <= currMax; j += i){
                isPrime[j] = false;
            }
        }
    }

    
    for(int i = 0; i < a.size(); i++){
        if(isPrime[a[i]]==true && cnt[a[i]] > 0){
            cout<<a[i]<<" "<<cnt[a[i]]<<endl;
            cnt[a[i]] = -1;
        }
    }


    return 0;
}