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
    int n;
    cin >> n;
    int maxx = INT_MIN, minn = INT_MAX;
    int qr[n];
    int i1, i2;
    for (int i = 0; i < n; i++)
    {
        cin >> qr[i];
        if (qr[i] > maxx)
            maxx = qr[i];
        if (qr[i] < minn)
            minn = qr[i];
    }
    //cout << max << " " << min;
    int flag = 0;
    int i = 0, j = n - 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (qr[i] == maxx)
        {
            i1 = min(i + 1, n - i);
            cout << i1 << " ";
        }
        else if (qr[i] == minn)
        {
            i2 = min(i + 1, n - i);
            cout << i2 << " ";
        }
    }

    cout << count << "\n";
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
