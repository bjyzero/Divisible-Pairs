#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(const int &Case)
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    ll ans = 0;
    map<int, map<int, int>> mp;
    for (int i = 0; i < n; ++i)
    {
        ans += mp[a[i] % y][(x - a[i] % x) % x];
        mp[a[i] % y][a[i] % x]++;
    }
    cout << ans << '\n';
}

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve(i);
    }
    return 0;
}