// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int maxTripletSum(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        cout << maxTripletSum(a, n);
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends

int maxTripletSum(int arr[], int n)
{
    // Complete the function
    sort(arr, arr + n);
    int sum = 0;
    sum = arr[n - 1] + arr[n - 2] + arr[n - 3];
    return sum;
}