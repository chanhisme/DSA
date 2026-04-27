// 455. Assign Cookies
// Assume you are an awesome parent and want to give your children some cookies. 
// But, you should give each child
// at most one cookie.
// Each child i has a greed factor g [i] , 
// which is the minimum size of a cookie that the child will be content with;
// and each cookie j has a size s [j] . If s [j] >= g[i], 
// we can assign the cookie j to the child i, and the child i
// will be content. Your goal is to maximize the number of your content 
// children and output the maximum number.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define foi(i, l, r) for(int i = l; i < r; i++)
#define fod(i, l, r) for(int i = r; i > l; i--)
#define faster ios::sync_with_stdio(0); cin.tie(0);
void solve(vector <int> &g, vector <int> &s, int n, int m){
    int res = 0;
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());
    int p1 = 0, p2 = 0;
    while(p1 < n && p2 < m){
        if(g[p1] <= s[p2]){
            res++;
            p1++;
            p2++;
        }
        else{
            p2++;
        }
    }
    cout<<res;
}
int main(){
    faster;
    int n, m;
    cin >> n >> m;
    vector<int> g(n), s(m);
    foi(i, 0, n){
        cin >> g[i];
    }
    foi(i, 0, m){
        cin >> s[i];
    }
    solve(g, s, n, m);





    return 0;
}