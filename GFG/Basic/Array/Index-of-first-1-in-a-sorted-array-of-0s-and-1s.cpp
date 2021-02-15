// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int firstIndex(int a[], int n);

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

        cout << firstIndex(a, n) << endl;
    }
} // } Driver Code Ends

int firstIndex(int a[], int n)
{
    int flag;
    // Your code goes here
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] == 1)
        {
            flag = i;
            break;
        }
        else
            flag = -1;
    }
    return flag;
}