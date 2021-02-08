// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution
{
public:
    long long fact(int n)
    {
        long long pro = 1;
        if (n == 1 || n == 0)
            return pro;
        else
        {
            for (int i = 2; i <= n; i++)
            {
                pro = pro * i;
            }
            return pro;
        }
    }
    long long nPr(int n, int r)
    {
        // code here
        long long a = fact(n);
        long long b = fact(n - r);

        return a / b;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nPr(n, r) << endl;
    }
    return 0;
} // } Driver Code Ends