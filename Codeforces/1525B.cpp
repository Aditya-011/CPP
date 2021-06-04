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
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = 0;

    if (arr[0] == 1 && arr[n - 1] == n)
    {
        for (ll i = 0; i < n - 1; i++)
        {
            //cout << "Bug\n";
            if (arr[i + 1] == (arr[i] + 1))
            {

                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    //cout << flag;
    if (flag)
    {
        cout << 0 << endl;
        return;
    }

    else if (arr[0] == 1 && arr[n - 1] == n)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << '\n';
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
