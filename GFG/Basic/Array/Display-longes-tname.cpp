// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    string longest(string names[], int n)
    {
        int maxlength = names[0].length(), ptr = 0;
        for (int i = 1; i < n; i++)
        {
            if (maxlength <= names[i].length())
            {
                maxlength = names[i].length();

                ptr = i;
            }
        }
        return names[ptr];
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
        string names[n];

        for (int i = 0; i < n; i++)
            cin >> names[i];
        Solution ob;
        cout << ob.longest(names, n) << endl;
    }
}
// } Driver Code Ends