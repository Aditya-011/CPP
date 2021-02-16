// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string gameResult(string s)
    {
        //code here.
        string res;
        if (s[0] == 'R')
        {
            if (s[1] == 'S')
                res = "A";
            else if (s[1] == 'R')
                res = "DRAW";
            else if (s[1] == 'P')
                res = "B";
        }
        if (s[0] == 'P')
        {
            if (s[1] == 'S')
                res = "B";
            else if (s[1] == 'R')
                res = "A";
            else if (s[1] == 'P')
                res = "DRAW";
        }
        if (s[0] == 'S')
        {
            if (s[1] == 'S')
                res = "DRAW";
            else if (s[1] == 'R')
                res = "B";
            else if (s[1] == 'P')
                res = "A";
        }

        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.gameResult(s) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends