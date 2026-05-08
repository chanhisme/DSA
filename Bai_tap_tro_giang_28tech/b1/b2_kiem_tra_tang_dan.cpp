#include <iostream>
#include <vector>

using namespace std;
int main (){
    vector <int> a;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int j = 0;
    bool tang = true;
    for(int i  =1; i < n; i++){
        if(a[j] < a[i]){
            j++;
        }
        else{
            tang = false;
            break;
        }
    }
    if(tang==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }



    return 0;
}