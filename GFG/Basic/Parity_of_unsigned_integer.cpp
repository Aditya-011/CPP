// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string computeParity(int n)
    {
        int count = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
                count++;
            n = n / 2;
        }
        if (count % 2 == 0)
        {
            return "even";
        }
        else
        {
            return "odd";
        }
        // code here
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
        cout << ob.computeParity(N) << endl;
    }
    return 0;
} // } Driver Code Ends