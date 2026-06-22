#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, int> a;
    a.insert({1, 2});
    a.insert({2, 10});
    for(auto it = a.begin(); it != a.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    for(const auto &it: a){
        cout<<it.first<<" "<<it.second<<endl;
    }




    return 0;

}