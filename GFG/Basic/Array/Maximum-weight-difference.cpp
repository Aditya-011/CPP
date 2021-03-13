// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

long long solve(int arr[], int n, int k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        auto ans = solve(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends

long long solve(int arr[], int n, int k)
{
    // code here
    sort(arr, arr + n);

    // Initializing the value to 0
    long long sum = 0, sum1 = 0, sum2 = 0;

    // Getting the sum of the arr
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Getting the sum of first k elements
    for (int i = 0; i < k; i++)
    {
        sum1 += arr[i];
    }

    // Getting the sum of (n-k) elements
    for (int i = n - k; i < n; i++)
    {
        sum2 += arr[i];
    }

    // Returning the maximum possible difference.
    return max(abs(sum1 - (sum - sum1)), abs(sum2 -
                                             (sum - sum2)));
}
