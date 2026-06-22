#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main (){
    // //Cách 1 dùng vector lưu danh sách đội
    // map<string, vector<string>> a;
    // int n; cin >> n;
    // cin.ignore();
    // for(int i = 0; i < n;i ++){
    //     string s;
    //     getline(cin, s);
    //     int pos = s.find('-');
    //     if(pos == string::npos){
    //         continue;
    //     }
    //     string team1 = s.substr(0, pos);
    //     string team2 = s.substr(pos+1);
    //     a[team1].push_back(team2);
    //     a[team2].push_back(team1);
    // }

    // for(auto it : a){
    //     vector <string> &tmp = it.second;
    //     sort(tmp.begin(), tmp.end());
    //     tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    // }
    // for(auto &it : a){
    //     cout<<it.first<<" : ";
    //     for(int i = 0; i < it.second.size(); i++){
    //         cout<<it.second[i]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Cách 2 dùng set ban đầu lưu danh sách đội(the best)
    map<string, set<string>> a;
    int n; cin >> n;
    cin.ignore();
    for(int i =0; i < n; i++){
        string s;
        getline(cin, s);
        int pos = s.find('-');
        if(pos == string::npos){
            continue;
        }
        string team1 = s.substr(0, pos);
        string team2 = s.substr(pos+1);
        a[team1].insert(team2);
        a[team2].insert(team1);
    }
    for(auto &it : a){
        cout<<it.first<<" : ";
        for(auto i = it.second.begin(); i != it.second.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
    
    // //Cách 3 input = vector rồi chuyển vector vào set
    // map<string, vector<string>> a;
    // int n; cin >> n;
    // cin.ignore();
    // for(int i = 0; i < n; i++){
    //     string s;
    //     getline(cin , s);
    //     int pos = s.find('-');
    //     if(pos == string::npos){
    //         continue;
    //     }
    //     string team1 = s.substr(0, pos);
    //     string team2 = s.substr(pos+1);
    // }

    // for(auto &it : a){
    //     set<string> tmp(it.second.begin(), it.second.end());
    //     it.second.assign(tmp.begin(),tmp.end());
    // }
    //  for(auto &it : a){
    //     cout<<it.first<<" : ";
    //     for(auto i = it.second.begin(); i != it.second.end(); i++){
    //         cout<<*i<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}