#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    //cout << c << " " << d << "\n";
    for (int i = 0; i < max(c.length(), d.length()); i++)
    {
        if (c[i] != d[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}