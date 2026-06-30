    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <cmath>
    using namespace std;

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        //mainCode
        int minDiff = 1e9;
        int check = -1e9;
        pair<int, int> res;
        int n; cin >> n;
        int target; cin >> target;
        vector <int> a(n);
        for( int &x : a) cin >> x;
        int left = 0, right = n - 1;
        sort(a.begin(), a.end());
        while(left < right){
            int sum = a[left] + a[right];
            int diff = abs(sum - target);
            if(diff < minDiff || (diff == minDiff && abs(a[left]-a[right]) > check)){
                    check = abs(a[left] - a[right]);
                    minDiff = diff;
                    res = {a[left], a[right]};
            }
            if(sum < target) left++;
            else if(sum > target) right--;
            else{
                left++;
                right --;
            }
            
        }
        cout<<res.first<<' '<<res.second;



        return 0;
    }