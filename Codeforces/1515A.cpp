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
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum1 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1 += arr[i];
        }
        if (sum1 < x)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if (sum1 == x)
            cout << "NO\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((sum + arr[i]) == x)
                    swap(arr[i], arr[i + 1]);
                sum += arr[i];
            }
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
