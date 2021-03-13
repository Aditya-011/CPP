// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long a[], long long b[], long long n, long long k);

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        cout << isPossible(a, b, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

bool isPossible(long long a[], long long b[], long long n, long long k)
{
    // Your code goes here
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    long long max = a[0] + b[0];
    bool flag = 1;
    /*for (int i = 0; i < n; i++)
    {
        // code 
        max = min(max, (a[i] + b[i]));
    }
*/
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] + b[i] < k)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}