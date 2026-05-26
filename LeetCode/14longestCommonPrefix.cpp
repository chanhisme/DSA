#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i =0; i < n; i++) cin >> s[i];
    if (n == 0){
        cout<<"";
        return 0;
    }
    string res;
    for(int i = 0; i < n; i++){
        char c = s[0][i];
        for(int j = 0; j < n; j++){
            if(i >= s[j].size() || s[j][i] != c){
                cout<<"";
                return 0;
            }
        }
        res.push_back(c);
    }
    
    cout<<res;



    return 0;
}