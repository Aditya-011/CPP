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
    ll sum = 0;
    set<ll> q;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        q.insert(arr[i]);
        sum += arr[i];
    }
    ll avg = sum / n;
    //cout << sum / n << " ";
    if (avg * n != (sum))
    {
        cout << "-1\n";
        return;
    }
    else
    {
        if (q.size() == 1)
        {
            cout << "0\n";
            return;
        }
        //sort(arr,arr+n);
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > avg)
            {
                count++;
            }
        }
        cout << count++ << "\n";
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
