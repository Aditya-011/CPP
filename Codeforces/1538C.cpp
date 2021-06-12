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
    ll n;
    ll sum = 0;
    cin >> n;
    vector<ll> arr;
    ll l, r;
    cin >> l >> r;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for (ll i = 0; i < n; i++)
    {
        auto i1 = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]);
        auto i2 = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]);
        sum += i2 - i1;
    }
    cout << sum << endl;
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