#include <iostream>
#include <vector>
using namespace std;

int isPrime(int sum){
    int checkPrime = 1;

    if(sum < 2){
        checkPrime = 0;
    }
    for(int i = 2; i*i <= sum; i++){
        if(sum % i == 0){
            checkPrime = 0;
            break;
        }
    }
return checkPrime;
}

int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int sumLeft = a[0], sumRight = 0;
    for(int i  = 2; i < n; i++){
        sumRight += a[i];
    }


    for(int i = 1; i < n - 1; i++){
        if(isPrime(sumLeft) == 1 && isPrime(sumRight) == 1){
            cout<<i<<" ";
        }
    sumLeft += a[i];
    sumRight -= a[i+1];
    }




    return 0;
}