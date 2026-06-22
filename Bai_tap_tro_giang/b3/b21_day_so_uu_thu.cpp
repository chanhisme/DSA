// Cho dãy A[] chỉ bao gồm các số nguyên dương nhưng không biết trước số phần tử của
// dãy. Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây: 
// Dãy gọi là ưu thế chẳn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ. 
// Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector <int> a;
    while(cin>>n){
        a.push_back(n);
    }
    int cntOdd = 0, cntEven = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0){
            cntEven ++;
        }
        else{
            cntOdd++;
        }
    }
    if(cntOdd > cntEven && a.size() % 2!=0 || cntEven > cntOdd && a.size() % 2 == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}