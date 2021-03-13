// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    int count_divisors(int n)
    {
        //Code here.
        int sum = 0, a = n, count = 1;
        while (a != 0)
        {
            int tmp = a % 10;
            sum = sum + tmp;
            a /= 10;
        }
        if (sum % 3 == 0)
        {
            for (int i = 3; i <= n / 2; i++)
            {
                if (i % 3 == 0)
                    count++;
            }
            return count;
        }
        else
            return 0;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.count_divisors(n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends