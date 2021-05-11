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
    /* ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);*/
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t;
    cin >> t;

    while (t--)
    {
        ll r, b, d;
        cin >> r >> b >> d;
        if (r > b)
            swap(r, b);
        if ((d + 1) * r >= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
/**/