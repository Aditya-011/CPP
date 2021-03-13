// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << altProduct(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

long long altProduct(long long a[], long long n)
{
    // Your code goes here
    vector<long long> g, s;
    sort(a, a + n);
    for (int i = 0; i < (n / 2); i++)
    {
        s.push_back(a[i]);
        // cout<<a[i]<<" ";
    }
    for (int i = n / 2; i < n; i++)
    {
        g.push_back(a[i]);
    }
    sort(g.begin(), g.end(), greater<int>());
    int b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            a[i] = g[b];
            b++;
        }
        else
        {
            a[i] = s[c];
            c++;
        }
    }
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            sum = sum + a[i] * a[i + 1];
            // cout<<sum<<" ";
        }
    }
    return sum;
}