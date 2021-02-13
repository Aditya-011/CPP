// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long minTime(long long a[], long long b[], long long n);

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long i = 0; i < n; i++)
            cin >> b[i];

        cout << minTime(a, b, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

long long minTime(long long a[], long long b[], long long n)
{
    // Your code goes here
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (i % 2 == 0)
            sum1 = sum1 + a[i];
        else
            sum1 = sum1 + b[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (i % 2 == 0)
            sum2 = sum2 + b[i];
        else
            sum2 = sum2 + a[i];
    }
    return min(sum1, sum2);
}
