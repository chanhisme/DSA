//  Example 1
// Alice and Bob are standing on a 2D plane. Alice starts at the point (0, 0), and Bob
// starts at the point (R, S) (1 <= R, S <= 1000). Every second, Alice moves M units to the
// right, and N units up. Every second, Bob moves P units to the left, and Q units down.
// (1 <= M, N, P, Q <= 10). Determine if Alice and Bob will ever meet (be at the same point at
// the same time), and if so, when.
// INPUT FORMAT:
// The first line of the input contains R and S.
// The second line of the input contains M, N, P, and Q.
// OUTPUT FORMAT:
// Please output a single integer containing the number of seconds after the start at which Alice
// and Bob meet. If they never meet, please output -1.
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int ax = 0, ay = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int r, s, m, n, p, q;
    cin >> r >> s;
    int bx = r, by =s;
    cin >> m >> n >> p >> q;
    int cnt = 0;
    while(ax < bx && ay < by){
        ax += m;
        ay += n;
        bx -= p;
        by -= q;
        ++cnt;

    }
    if(ax == bx && ay == by){
        cout<<cnt;
    }
    else{
        cout<<-1;
    }








    return 0;
}