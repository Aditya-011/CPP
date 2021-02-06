// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution
{
public:
    string armstrongNumber(int n)
    {
        // code here
        int count = 0, c = n;

        while (n != 0)
        {
            int tmp = n % 10;
            count = count + pow(tmp, 3);
            n = n / 10;
                }
        if (count == c)
            return "Yes";
        else
            return "No";
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
// } Driver Code Ends