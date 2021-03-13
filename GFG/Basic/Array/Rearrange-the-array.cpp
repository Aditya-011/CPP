// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

void rearrangeArray(int arr[], int n);

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
        {
            cin >> arr[i];
        }
        rearrangeArray(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

void rearrangeArray(int arr[], int n)
{
    // code here
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }
    sort(b, b + n);
    int c = n - 1;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = b[a];
            a++;
        }
        else
        {
            arr[i] = b[c];
            c--;
        }
        if (a > c)
            break;
    }
}