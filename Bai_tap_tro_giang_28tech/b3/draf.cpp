#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int a[n] = {2,3,3,2};
    bool doiXung = true;
    for(int i=0; i<(n/2); i++){
        for(int j=n-1; j>=(n/2); j--){
            if(a[i] != a[j]){
                doiXung=false;
            }
        }
    }

    if(doiXung){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}