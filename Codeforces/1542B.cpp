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
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes\n";
            return;
        }
        cout << "No\n";
    }
    else
    {
        ll num = 1;
        while (num <= n)
        {
            if ((n - num) % b == 0)
            {
                cout << "Yes\n";
                return;
            }
            num *= a;
        }
        cout << "No\n";
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
