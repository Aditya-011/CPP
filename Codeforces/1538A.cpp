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
    int arr[n];
    int maxx = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
        minn = min(minn, arr[i]);
    }
    int lmax = -1, lmin = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxx)
            lmax = i + 1;
        else if (arr[i] == minn)
            lmin = i + 1;
    }
    int rmax = n + 1 - lmax, rmin = n + 1 - lmin;
    int tmp1 = max(lmax, lmin);
    int tmp2 = max(rmax, rmin);
    int tmp3 = min(lmin + rmax, lmax + rmin);
    cout << min(tmp1, min(tmp2, tmp3)) << "\n";
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
