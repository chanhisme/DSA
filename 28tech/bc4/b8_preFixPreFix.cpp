// Cho mảng A[] có N phần tử và M thao tác, mỗi thao tác yêu cầu bạn tăng các phần tử ở vị trí L tới R của mảng
// lên D đơn vị (1 <= L <= R <= N). Các thao tác này được đánh số từ 1 đến M, ngoài ra Tèo lại muốn thực hiện K truy
// vấn, mỗi truy vấn Tẻo lại thực hiện các thao tác từ x tới y theo số thứ tự thao tác (1 <= x <= y <= M). Bạn hãy giúp
// Tèo in ra mảng A[] sau K truy vấn

// Input Format

// · Dòng 1 là N, M, K

// · Dòng 2 là N số trong mằng A[]

// · M dòng tiếp theo mỗi dòng gồm 3 số L, R, D

// · K dòng tiếp theo mỗi dòng gồm 2 số x, y
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 100000 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //mainCode
    int l[maxn], r[maxn], d[maxn];
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }
    vector <int> cnt(m+3, 0);
    for(int i = 1; i <= k; i++){
        int x, y; cin >> x >> y;
        cnt[x] += 1;
        cnt[y+1] -= 1;
    }
    vector <int> diff(n+3, 0);
    for(int i = 1; i <= m; i++){
        cnt[i] += cnt[i-1];
        diff[l[i]] += d[i] * cnt[i];
        diff[r[i] + 1] -= d[i] * cnt[i];
    }
    for(int i = 1; i <= n; i++){
        diff[i] += diff[i-1]; //diff[0] = 0;
        cout<<a[i] + diff[i]<<' ';
    } 

    return 0;
}