#include <iostream>
#include <unordered_set>
#include <cstring>

using namespace std;
int main(){
    int n = 19; //cin >> n;
    bool ok = false;
    unordered_set <int> num;
    int sum;
    while(n != 1 && num.count(n) == 0){
        num.insert(n);
        int cpy = n;
        sum = 0;
        while(cpy != 0){
            int tmp = cpy % 10;
            sum += (tmp*tmp);
            cpy /= 10;
        }
        n = sum;
    }
    if(n == 1) cout<<"true";
    else cout<<"false";

    
    return 0;
}