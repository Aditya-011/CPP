#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n], d[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        d[i] = a[i] + b[i] + c[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i] >= 2)
            count++;
    }
    cout << count;
}