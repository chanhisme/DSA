#include <bits/stdc++.h>
using namespace std;

int ext_euclid(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    
    int q = a/b;
    int r = a%b;
    int x1 =0, y1 = 0;
    int d = ext_euclid(b, r, x1, y1);
    x = y1;
    y = x1 - q * y1;
    return d;
}
pair <int, int> sol = {INT_MAX, INT_MAX};

pair <int, int> diophantineSolve(int a, int b, int c){
    int x = 0, y = 0;
    int d = ext_euclid (a, b, x, y);
    if(c/d != 0){
        return sol;
    }
    x *= (c/d);
    y *= (c/d);
    if(a < 0) x = -x;
    if(b < 0) y = -y;
    return make_pair(x,y);
}
int cnt(pair <int, int> res, int x1, int x2, int y1, int y2){
    int cnt_x = floor(x2/res.first) - floor(x1/res.first) + 1;
    int cnt_y = floor(y2/res.second) - floor(y1/res.second) + 1;
    return min(cnt_x, cnt_y); 
}




int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x1,x2,y1,y2;
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    int x, y;
    cout<<cnt(diophantineSolve(a,b,c), x1, x2, y1, y2);
}