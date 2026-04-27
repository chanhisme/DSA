#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(const pair<int,int> &a, const pair <int,int> &b){
    return a.second > b.second;
}
int main(){
    vector <int> a;
    int s;
    while(cin >> s){
        a.push_back(s);
    }
    map<int,int> cnt;
    for(int i = 0; i < a.size(); i++){
        int n = abs(a[i]);
        int tmp = n % 10;
        bool ok = true;
        while(n != 0){
            int k = tmp;
            n = n / 10;
            tmp = n % 10;
            if(k < tmp){
                ok = false;
                break;
            }
        }
        if(ok){
            cnt[a[i]] ++;
        }
    }
    
    vector <pair<int,int>> res;
    for(auto it = cnt.begin(); it != cnt.end(); it++){
            res.push_back({it->first, it->second});
        
    }

    // //Sử dụng lambda (dịch theo vị trí đứng)
    // stable_sort(res.begin(), res.end(), [](auto &a, auto &b){ 
    //     return a.second > b.second;
    // });


    //Sử dụng comparation function //stable để cho in ra theo vị trí xuất hiện
    stable_sort(res.begin(), res.end(), cmp);

    for(int i = 0; i < res.size() ; i++){
        cout<<res[i].first<<" "<<res[i].second<<endl;

    }


    return 0;
}