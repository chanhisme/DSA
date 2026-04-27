#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main (){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    int maxVal = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > maxVal){
            maxVal = a[i];
        }
    }
    
    vector <int> freq(maxVal + 1, 0);
    for(int i = 0; i < n; i++){
        freq[a[i]] ++;
    }

    for(int i = 0; i <= maxVal; i++){
        if(freq[i] > 0){
            cout<<i<<" : "<<freq[i]<<endl;
        }
    }



    return 0;
}