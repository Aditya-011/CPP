#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, k, a;
        cin >> x >> k;
        a = 1;
        ll posA = x + 1, posB = 0;
        while (a <= k)
        {
            posA--;
            posB++;

            if (posA < 1)
                posA = x;
            if (posB > x)
                posB = 1;
            if (posB == posA)
                posB++;
            //cout << posA << " " << posB << endl;
            a++;
        }
        cout << posB << endl;
    }
}