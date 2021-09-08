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
    ll a = n / 3;
    if (a * 3 == n)
    {
        cout << a << " " << a << "\n";
    }
    else if ((n - (a * 3)) % 2 == 0)
    {
        cout << a << " " << a + 1 << "\n";
    }
    else if ((n - (a * 3)) % 2 == 1)
        cout << a + 1 << " " << a << "\n";
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
