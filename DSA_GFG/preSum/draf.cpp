#include <bits/stdc++.h>
using namespace std;

// ----------- custom hash chống hack -----------
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
// ---------------------------------------------

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    unordered_map<long long,long long,custom_hash> mp;
    mp.reserve(n);                 // tránh rehash
    mp.max_load_factor(0.7);       // giảm collision

    mp[0] = 1;

    long long sum = 0;
    long long cnt = 0;

    for (int i = 0; i < n; ++i) {
        sum += a[i];

        auto it = mp.find(sum - k);   // chỉ lookup 1 lần
        if (it != mp.end())
            cnt += it->second;

        mp[sum]++;
    }

    cout << cnt;
}
