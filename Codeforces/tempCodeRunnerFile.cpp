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
bool binarySearch(vector<ll> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return 1;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return 0;
}
void solve()
{
    ll n, k, count = 0;
    cin >> n >> k;
    char q[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    ll a = 0, b = n - 1;
    bool flags = 0, flagl = 0;
    set<char> check;
    for (ll i = 0; i < n; i++)
    {
        check.insert(q[i]);
    }

    if (n <= 2 && check.size() == 1)
    {
        if (n == 1)
        {
            cout << "1\n";
            return;
        }
        else
        {
            cout << "2\n";
            return;
        }
    }
    else
    {
        while (a < b)
        {
            //cout << "1st step Complete\n";
            if (flagl && flags)
            {
                break;
            }
            else
            {
                if (!flags)
                {
                    if (q[a] == '*')
                    {
                        q[a] = 'X';
                        cout << a << "\n";
                        // count++;
                        flags = 1;
                    }
                    a++;
                }
                if (!flagl)
                {
                    if (q[b] == '*')
                    {
                        q[b] = 'X';
                        cout << b << "\n";
                        //count++;
                        flagl = 1;
                    }
                    b--;
                }
            }
        }
        //cout << "1st step Complete\n";
        vector<ll> d;
        for (ll i = 0; i < n; i++)
        {
            if (q[i] == '.')
                d.push_back(i);
        }
        /*for (ll i = 0; i < d.size(); i++)
    {
        /* code */
        // cout << d[i] << " ";
        //}

        ll j = 0;

        while (a < n)
        {
            /* ll j = d.size();
        for (ll i = 0; i < d.size(); i++)
        {
            if (a < d[i])
            {
                j = d[i];
                break;
            }
        }*/
            ll e = k;
            while (e--)
            {
                if (!binarySearch(d, 0, n - 1, (a + e)) && (a + e) < n)
                {
                    a += e;
                    //cout << "\n"
                    //<< e << " ";
                    q[a] = 'X';
                    //count++;
                    //cout << count << "\n";
                    break;
                }
            }
            if (e == 0)
            {
                break;
            }
            //cout << "\n open";
        }
        //cout << count << "\n";
        for (ll i = 0; i < n; i++)
        {
            if (q[i] == 'X')
                count++;
        }
        cout << count << "\n";
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
