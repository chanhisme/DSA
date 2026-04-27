    #include <iostream>
    #include <vector>
    #include <unordered_map>
    using namespace std;


    int main(){
        ios:: sync_with_stdio(0);
        cin.tie(0);
        //mainCode
        int n, k; cin >> n >> k;
        vector <int> a(n);
        for(int &x : a) cin >> x;
        int res = 0;
        unordered_map<int,int> cnt;
        for(int i = 0; i < n; i++){
            int target1 = k + a[i];
            int target2 = a[i] - k;
            if(k == 0){
                if(cnt.count(a[i])){
                    res += cnt[a[i]];
                }
            }
            else{
                if(cnt.count(target1)){
                    res += cnt[target1];
                }
                if(cnt.count(target2)){
                    res += cnt[target2];
                }
                cnt[a[i]] ++;
            }
        }
        cout<<res;


        return 0;
    }