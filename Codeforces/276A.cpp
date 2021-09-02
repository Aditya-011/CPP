#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int t[n], f[n], j[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> t[i];
        if (t[i] <= k)
            j[i] = f[i];
        else
            j[i] = f[i] - (t[i] - k);
    }
    cout << *max_element(j, j + n) << endl;
}