// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

//User function template for C++
class Solution
{
public:
    int search(int arr[], int n, int k)
    {
        // code here
        int key = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                key = i + 1;
                break;
            }
        }
        return key;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, k;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.search(a, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends