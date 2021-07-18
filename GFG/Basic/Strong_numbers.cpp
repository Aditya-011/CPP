// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int factorial(int n)
    {
        int res = 1;
        if (n == 1 || n == 0)
        {
            return 1;
        }
        for (int i = 1; i <= n; i++)
        {
            res *= i;
        }
        return res;
    }
    int isStrong(int N)
    {
        // code here
        int sum = 0;
        int a = N;
        while (N > 0)
        {

            sum += factorial(N % 10);
            N = N / 10;
        }
        if (sum == a)
        {
            return 1;
        }
        else
            return 0;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
} // } Driver Code Ends