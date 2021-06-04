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
    ll count = 0;
    vector<ll> even, odd, q;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
            even.push_back(tmp);
        else
            odd.push_back(tmp);
    }
    for (ll i = 0; i < (even.size()); i++)
    {
        q.push_back(even[i]);
    }
    for (ll i = 0; i < (odd.size()); i++)
    {
        q.push_back(odd[i]);
    }
    // cout<<even.size()<<" "<<odd.size()<<"\n";
    /*for (ll i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }*/

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            if (i != j)
            {
                if (__gcd(q[i], 2 * q[j]) > 1)
                    count++;
            }
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
