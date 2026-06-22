#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
int SIZE = 100000001;
int main(){
    // ///Cách 1: mảng đánh dấu --> ko xài dc giá trị âm
    // vector <int> a;
    // int n; cin >> n;
    // vector <int> freq(SIZE + 1, 0);
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     a.push_back(x);
    //     freq[x] ++;
    // }
    // int myMax = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     if(a[i] > myMax){
    //         myMax = a[i];
    //     }
    // }
    // vector <bool> isPrint (SIZE +1, false);
   
    // for(int i = 0; i < n; i++){
    //     if(freq[a[i]] > 0 && isPrint[a[i]] == false){
    //         cout<<a[i]<<" : "<< freq[a[i]]<<endl;
    //         isPrint[a[i]] = true;
    //     }
    // }


    
    //Cách 2: hash map --> xài dc âm và linh hoạt;
    vector <int> a;
    unordered_map<int, int> freq;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++){
        freq[a[i]] ++;
    }
    unordered_map<int, bool> isPrint;
    for(int i = 0; i < n; i++){
        if(isPrint[a[i]] == false){
            cout<<a[i]<<" : "<<freq[a[i]]<<endl;
            isPrint[a[i]] = true;
        }
    }






    return 0;
}