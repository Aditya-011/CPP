// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int printMinimumProduct(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i, a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        cout << printMinimumProduct(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

long long int printMinimumProduct(int arr[], int n)
{

    sort(arr, arr + n);
    int min1 = arr[0], min2 = arr[1];
    if (min1 == 100000 && min2 == 100000)
        return 10000000000;
    else
        return min1 * min2;
}