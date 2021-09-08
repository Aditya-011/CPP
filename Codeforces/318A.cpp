#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, k;
    cin >> a >> k;
    if ((a % 2 == 0 && k > a / 2) || (a % 2 == 1 && k > a / 2 + 1))
    {

        ll n, a1 = 2, d = 2;
        if (a % 2 == 0)
            n = k - a / 2;
        else
            n = k - (a / 2 + 1);
        cout << a1 + (n - 1) * d;
    }
    else
    {
        ll a1 = 1, d = 2;
        cout << a1 + (k - 1) * d;
    }
}