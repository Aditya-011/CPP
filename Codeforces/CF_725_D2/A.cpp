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
    int k = 300 - n;
    vector<ll> q;
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        q.push_back(tmp);
    }
    vector<ll> b;
    for (int i = 0; i < n; i++)
    {
        b[i] = q[i];
    }
    sort(b.begin(), b.end());
    while (k--)
    {
        int f = b.size();
        for (ll i = 0; i < b.size(); i++)
        {
            for (int j = i + 1; j < b.size(); i++)
            {
                if (!binary_search(b.begin(), b.end(), abs(b[i] - b[j])))
                {
                    b.push_back(abs(b[i] - b[j]));
                }
                if (b.size() > k + n)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        if (b.size() == f)
        {
            cout << b.size() << "\n";
            for (ll i = 0; i < b.size(); i++)
            {
                cout << b[i] << "\n";
            }
            return
        }
    }
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
