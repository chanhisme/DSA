#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ext_euclid(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = ext_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

pair<ll, ll> diophantineSolve(ll a, ll b, ll c, ll &d_out) {
    c = -c;
    ll x, y;
    ll d = ext_euclid(a, b, x, y);
    d_out = d;
    if (c % d != 0) {
        return {LLONG_MAX, LLONG_MAX};
    }
    ll scale = c / d;
    x *= scale;
    y *= scale;
    if(a < 0) x = -x;
    if(b < 0) y = -y;
    return {x, y};
}

ll cnt(pair<ll, ll> res, ll x1, ll x2, ll y1, ll y2, ll a, ll b, ll d) {
    ll x0 = res.first, y0 = res.second;
    if (x0 == LLONG_MAX) return 0;

    ll stepX = b / d;
    ll stepY = a / d;

    ll kx1, kx2;
    if (stepX > 0) {
        kx1 = (ll)ceil((double)(x1 - x0) / stepX);
        kx2 = (ll)floor((double)(x2 - x0) / stepX);
    } else {
        kx1 = (ll)ceil((double)(x2 - x0) / stepX);
        kx2 = (ll)floor((double)(x1 - x0) / stepX);
    }

    ll ky1, ky2;
    if (stepY > 0) {
        ky1 = (ll)ceil((double)(y0 - y2) / stepY);
        ky2 = (ll)floor((double)(y0 - y1) / stepY);
    } else {
        ky1 = (ll)ceil((double)(y0 - y1) / stepY);
        ky2 = (ll)floor((double)(y0 - y2) / stepY);
    }

    ll k_min = max(kx1, ky1);
    ll k_max = min(kx2, ky2);

    if (k_min > k_max) return 0;
    return k_max - k_min + 1;
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    if (a == 0 && b == 0) {
        if (c == 0) cout << (x2 - x1 + 1) * (y2 - y1 + 1) << '\n'; // 0 + 0 = 0 nên nhận hết k
        else cout << 0 << '\n';
        return 0;
    }

    ll d;
    pair<ll, ll> res = diophantineSolve(a, b, c, d);
    cout << cnt(res, x1, x2, y1, y2, a, b, d) << '\n';
    return 0;
}