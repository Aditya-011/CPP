#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, u, v;
        cin >> n >> u >> v;
        int arr[n];
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ll tmp = abs(arr[i] - arr[i + 1]);
            if (tmp == 0)
                cout << v + min(u, v) << endl;
            else if (tmp > 0)
                cout << 0 << endl;
            else
                cout << min(u, v) << endl;
        }
    }
}