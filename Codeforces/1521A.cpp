#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x, y, z;
        x = a;
        z = x * b;
        y = z - x;
        if (x == y)
        {
            y += (a * b);
            z += (a * b);
        }
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
    }
}