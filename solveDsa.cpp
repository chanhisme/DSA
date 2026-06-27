#include <iostream>
#include <vector>
using namespace std;
char bin[] = "01";
vector <string> res;
string tmp;
void backtrack(int n){
    if(tmp.size() == n){
        res.push_back(tmp);
        return;
    }
    for(int i = 0; i <= 1; i ++){
        tmp.push_back(bin[i]);
        backtrack(n);
        tmp.pop_back();
    }

}
void out(){
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
}
int main(){
    int n; cin >> n;
    backtrack(n);
    out();



    return 0;
}