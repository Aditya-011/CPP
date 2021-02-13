#include <bits/stdc++.h>
using namespace std;
int length(int a[], int n)
{
    int j = 0;
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            j++;
        else
            b[j]++;
    }
    sort(b, b + n);
    int length = n - 1;
    return b[length];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << length(a, n) << endl;
    }
}