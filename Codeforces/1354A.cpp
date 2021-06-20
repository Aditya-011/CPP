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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b >= a)
    {
        cout << b << "\n";
        return;
    }
    else if (a > b && d >= c)
    {
        cout << "-1\n";
        return;
    }
    else
    {
        ll time = b;
        ll buffer1 = a - b;
        ll buffer2 = c - d;
        ll count = buffer1 / buffer2;
        if ((count * buffer2) != buffer1)
        {
            count++;
        }
        time += count * c;
        /* while (buffer1 > 0)
        {
            buffer1 -= buffer2;
            time += c;
        }*/
        cout << time << "\n";
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
