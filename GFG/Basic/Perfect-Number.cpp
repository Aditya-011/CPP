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
        int pro = 1;
        if (n == 1 || n == 0)
            return 1;
        else
        {
            for (int i = 1; i <= n; i++)
            {
                pro = pro * i;
            }
            return pro;
        }
    }
    int isPerfect(int N)
    {
        // code here
        int sum = 0, a = N;
        while (N != 0)
        {
            int tmp = N % 10;
            int a = fact(tmp);
            //   cout << a << endl;
            sum = sum + a;
            N = N / 10;
        }
        if (sum == a)
            return 1;
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
        cout << ob.isPerfect(N) << "\n";
    }
}
// } Driver Code Ends