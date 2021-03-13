// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long find_multiplication(int a[], int b[], int n, int m);

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

        int m;
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        cout << find_multiplication(a, b, n, m) << endl;
    }
    return 0;
} // } Driver Code Ends

long long find_multiplication(int a[], int b[], int n, int m)
{
    // Complete the function
    signed int minValue = b[0], maxValue = a[0];
    for (int i = 0; i < n; i++)
        maxValue = max(maxValue, a[i]);
    for (int i = 0; i < m; i++)
    {
        if (minValue > b[i])
            swap(minValue, b[i]);
    }
    return (minValue * maxValue);
}
