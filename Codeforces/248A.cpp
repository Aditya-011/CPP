#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int a0 = 0, b0 = 0, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            a0++;
        if (b[i] == 0)
            b0++;
    }
    if (n / 2 >= a0)
        time += a0;
    else
        time += n - a0;
    if (n / 2 >= b0)
        time += b0;
    else
        time += n - b0;
    cout << time;
}