#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9 + 7;
ll mod(ll x)
{
    return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a) * mod(b)));
}
void solve()
{

    ll n = 4;

    vector<pair<ll, ll>> d;
    for (ll i = 0; i < 4; i++)
    {
        ll tmp;
        cin >> tmp;
        d.push_back(make_pair(tmp, i));
    }
    sort(d.begin(), d.end());
    if ((d[n - 1].second == 2 && d[n - 2].second == 1) || (d[n - 1].second == 1 && d[n - 2].second == 2))
    {
        cout << "YES\n";
    }
    else if (abs(d[n - 1].second - d[n - 2].second) > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
