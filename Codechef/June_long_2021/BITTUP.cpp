#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll M = pow(10, 9) + 7;
ll mod(ll x)
{
    return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a) * mod(b)));
}

ll power(ll a, ll b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % M;
        a = (a * a) % M;
        b = b >> 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int num = power(2, n) - 1;
    cout << power(num, m) << "\n";
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
