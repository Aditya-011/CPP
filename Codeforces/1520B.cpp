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
    if (n <= 9)
    {
        cout << n << "\n";
        return;
    }
    else if (n > 10 && n < 20)
    {
        cout << 10 << endl;
        return;
    }
    else
    {
        ll count = 9;
        ll tmp = 1;
        ll b = 1;
        ll a = n / 10 - 1;
        bool flag = 0;
        while (a-- && !flag)
        {
            tmp *= 10;
            for (int i = 1; i < 10; i++)
            {
                if ((i * (tmp + b)) <= n)
                {
                    count++;
                }
                else
                {
                    flag = 1;
                }
            }
            b = b * 10 + 1;
        }
        cout << count << "\n";
        return;
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
