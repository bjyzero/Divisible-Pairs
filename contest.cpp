// 这里要求 a_i - a_j 可以被 y 整除，则说明 a_i % y == a_j % y 
// 而 a_i + a_j 可以被 x 整除，则如果 a_i % x = t， 那么 a_j % x = x - t
//我们先开一个 map 记录被 y 整除相同的数字， 在 map 内部再开一个 map 记录被 x 取余后的数字

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
