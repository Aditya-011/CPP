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
    string a, b, c;
    cin >> n >> a >> b >> c;
    ll a12 = 0, a13 = 0, a23 = 0;
    for (ll i = 0; i < 2 * n; i++)
    {
        if (a[i] == b[i])
            a12++;
    }
    for (ll i = 0; i < 2 * n; i++)
    {
        if (a[i] == c[i])
            a13++;
    }
    for (ll i = 0; i < 2 * n; i++)
    {
        if (c[i] == b[i])
            a23++;
    }
    // cout << a12 << a13 << a23 << endl;
    string result;
    ll count = 3 * n;
    if (a12 >= a13 && a12 >= a23)
    {
        ll i = 0;
        //cout << "Entered 1" << endl;
        while (count-- && i < (2 * n))
        {

            if (a[i] == b[i])
            {
                // cout << "Entered if" << endl;

                cout << a[i];
                i++;
            }
            else
            {
                //cout << "Entered else" << endl;

                cout << a[i];

                cout << b[i];

                i++;
            }
        }
        cout << "\n";
    }
    else if (a13 >= a23 && a13 >= a12)
    {
        ll i = 0;
        //cout << "Entered 2" << endl;

        while (count-- && i < (2 * n))
        {
            if (a[i] == c[i])
            {
                cout << a[i];
                i++;
            }
            else
            {
                cout << a[i];

                cout << c[i];

                i++;
            }
        }
        cout << "\n";
    }
    else if (a23 >= a13 && a23 >= a12)
    {
        ll i = 0;
        //cout << "Entered 3" << endl;

        while (count-- && i < (2 * n))
        {
            if (b[i] == c[i])
            {

                cout << b[i];
                i++;
            }
            else
            {

                cout << b[i];

                cout << c[i];

                i++;
            }
        }
        cout << "\n";
    }
    //cout << result.length() << "\n";
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
