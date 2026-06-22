#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map <char, int> roman = {
                        {'I', 1},
                        {'V', 5},
                        {'X', 10},
                        {'L', 50},
                        {'C', 100},
                        {'D', 500},
                        {'M', 1000}
        };
        int q;
        cin >> q;
        while(q--){
            string s;
            cin >> s;
            long long res = 0;
            int pre = 0, curr;
            for(int i = s.size()-1; i >= 0; i--){
                curr = roman[s[i]];
                if(curr < pre){
                    res -= curr;
                }
                else{
                    res += curr;
                }
                pre = curr;
            }
            cout<<res<<endl;
        }
        


    return 0;
}