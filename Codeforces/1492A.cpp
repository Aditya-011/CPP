#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        unsigned long long a, b, c, p, tmp, cmp;
        cin >> p >> a >> b >> c;
        cmp = min(a, b);
        cmp = min(cmp, c);
        if (p <= cmp)
        {
            tmp = min(a - p, b - p);
            tmp = min(tmp, c - p);
            cout << tmp << endl;
        }
        else
        {
            a *= 2;
            b *= 2;
            c *= 2;
            tmp = min(a - p, b - p);
            tmp = min(tmp, c - p);
            cout << tmp << endl;
        }
    }
}