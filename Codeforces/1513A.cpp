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
        ll n, k;
        cin >> n >> k;

        if (n <= k)
            cout << "-1\n";
        else if (k >= 1 && n < 3)
            cout << "-1\n";
        else
        {
            ll arr[n];
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            if (k == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            else
            {
                ll count = 0;

                for (int i = 0; i < n - 1; i++)
                {
                    if (count == k)
                    {

                        break;
                    }
                    count++;
                    i++;
                    swap(arr[i], arr[i + 1]);
                }
                if (count == k)
                {
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
        }
    }
    return 0;
}
