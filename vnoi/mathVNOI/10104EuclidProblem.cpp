#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ext_euclid(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }

    ll x1 = 0, y1 = 0;
    ll q = a / b;
    ll r = a % b;
    ll d = ext_euclid(b, r, x1, y1);
    x = y1;
    y = x1 - q * y1;
    return d;
}

pair<ll, ll> sol = {LLONG_MAX, LLONG_MAX};

bool better(ll x1, ll y1, ll x2, ll y2)
{
    ll sum1 = llabs(x1) + llabs(y1);
    ll sum2 = llabs(x2) + llabs(y2);

    if (sum1 != sum2)
        return sum1 < sum2;
    return x1 <= y1; // Nếu sum bằng nhau, ưu tiên x <= y
}
void solve(ll a, ll b)
{
    ll x, y;
    ll d = ext_euclid(a, b, x, y);
    ll dx = b / d;
    ll dy = a / d;
    ll kx = -x / dx;
    ll ky = y / dy;
    ll bx = x, by = y;

    ll l = min(kx, ky)-100, r = max(kx, ky)+100;
    for (ll k = l; k < r; k++)
    {
        ll currx = x + k * dx;
        ll curry = y - k * dy;
        if (better(currx, curry, x, y))
        {
            bx = currx;
            by = curry;
        }
    }
    cout << bx << ' ' << by << ' ' << d << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    while (cin >> a >> b)
    {
        ll x, y;
        solve(a, b);
    }

    return 0;
}