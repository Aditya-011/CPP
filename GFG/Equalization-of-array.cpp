// C++ program to find minimum operations
// needed to equalize an array.
#include <bits/stdc++.h>
using namespace std;

// Returns minimum operations needed to
// equalize an array.
int minOperations(int arr[], int n)
{
    // Compute sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    // If average of array is not integer,
    // then it is not possible to equalize
    if (sum % n != 0)
        return -1;

    // Compute sum of absolute differences
    // between array elements and average
    // or equalized value
    int diff_sum = 0;
    int eq = sum / n;
    for (int i = 0; i < n; i++)
        diff_sum += abs(arr[i] - eq);

    return (diff_sum / 2);
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << minOperations(arr, n) << endl;
    }

    return 0;
}
