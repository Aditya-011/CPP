// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    int RedOrGreen(int n, string S)
    {
        //code here
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */

            if (S[i] == 'R')
                sum1++;
            else
                sum2++;
        }
        // cout<<sum1<<" "<<sum2;
        return min(sum1, sum2);
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N, S) << endl;
    }
    return 0;
} // } Driver Code Ends