// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool possible(long long arr[], long long n)
    {
        //code here.

        long long sum = 0, sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            sum1 += i + 1;
        }

        return (sum == sum1);
    }
};

// { Driver Code Starts.

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        if (ob.possible(arr, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
} // } Driver Code Ends