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
    cin >> n;
    int count = 0;
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        arr.push_back(make_pair(tmp, i));
    }
    sort(arr.begin(), arr.end());
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if ((arr[i].first * arr[j].first) == arr[i].second + arr[j].second + 2)
                count++;
            if ((arr[i].first * arr[j].first) > (2 * n))
            {
                break;
            }
        }
    }

    cout << count << "\n";
    return;
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
