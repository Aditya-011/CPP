#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> b[i] >> a[i];
    }
    int d = 0;
    for (int i = 0; i < n; i++)
    {

        d = d + a[i] - b[i];
        c[i] = d;
    }
    sort(c, c + n);
    cout << c[n - 1];
}