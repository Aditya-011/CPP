// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int a[], int n, int x)
    {

        // Your code here
        int s = 0, e = n;
        while (s <= e)
        {
            /* code */
            int mid = (s + e) / 2;

            if (a[mid] == x)
                return 1;
            else if (a[mid] > x)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(void)
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

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends