#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    map<string, vector<pair<int, double>>> a;
    string s;
    int tin;
    double diem;
    while(cin >> s >> tin >> diem){
        a[s].push_back({tin, diem});
    }
    
    for(auto it = a.rbegin(); it != a.rend(); it++){
        double tongDiem = 0;
        int tongTinChi = 0;
        cout<<(*it).first<<" : ";
        for(auto &x : (*it).second){
            tongDiem += (x.first * x.second);
            tongTinChi += x.first;
            
        }
        cout<<fixed<<setprecision(2)<<(double)(tongDiem / tongTinChi)<<endl;
    }








    return 0;
}