// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string is_AutomorphicNumber(int n)
    {
        // Code here
        int a = n, b, count = 0;
        int d = pow(n, 2);
        while (a != 0)
        {
            a = a / 10;
            count++;
        }
        int pro = 1;
        while (count--)
        {
            pro = pro * 10;
        }
        /*  cout << " " << pro << endl
             << d << endl;

        cout << d % pro << endl;*/
        if (d % pro == n)
            return "Automorphic";
        else
            return "Not Automorphic";
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
        string ans = ob.is_AutomorphicNumber(n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends