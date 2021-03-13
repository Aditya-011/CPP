#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
} // } Driver Code Ends

pair<long long, long long> getMinMax(long long a[], int n)
{
    long long minValue, maxValue = 0;
    for (int i = 1; i < n; i++)
        minValue = min(minValue, a[i]);
    for (int i = 1; i < n; i++)
        maxValue = max(maxValue, a[i]);
    return std::make_pair(maxValue, minValue);
}