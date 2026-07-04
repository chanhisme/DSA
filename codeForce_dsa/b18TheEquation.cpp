#include <bits/stdc++.h>
using namespace std;

int ext_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = ext_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

pair<int, int> diophantineSolve(int a, int b, int c) {
    c = -c;
    int x, y;
    int d = ext_euclid(a, b, x, y);
    if (c % d != 0) {
        return {INT_MAX, INT_MAX};
    }
    int scale = c / d;
    x *= scale;
    y *= scale;
    return {x, y};
}

int cnt(pair<int, int> res, int x1, int x2, int y1, int y2, int a, int b) {
    int x0 = res.first, y0 = res.second;
    if (x0 == INT_MAX) return 0;

    int d = gcd(abs(a), abs(b));
    int stepX = b / d;
    int stepY = a / d;

    int kx1 = (int)ceil((double)(x1 - x0) / stepX);
    int kx2 = (int)floor((double)(x2 - x0) / stepX);
    int ky1 = (int)ceil((double)(y0 - y2) / stepY); // 🔥 SỬA LẠI CHỖ NÀY
    int ky2 = (int)floor((double)(y0 - y1) / stepY); // 🔥 SỬA LẠI CHỖ NÀY

    int k_min = max(kx1, ky1);
    int k_max = min(kx2, ky2);

    if (k_min > k_max) return 0;
    return k_max - k_min + 1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    pair<int, int> res = diophantineSolve(a, b, c);
    cout << cnt(res, x1, x2, y1, y2, a, b) << '\n';
    return 0;
}