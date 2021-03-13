// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int find(vector<int> A, vector<int> B)
    {
        //  Code here

        int dot = (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);
        int a2 = pow(A[0], 2) + pow(A[1], 2) + pow(A[2], 2);
        int b2 = pow(B[0], 2) + pow(B[1], 2) + pow(B[2], 2);
        int cross = (a2 * b2) - pow(dot, 2);
        if (dot == 0)
            return 2;
        else if (cross == 0)
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> A(3), B(3);
        for (int i = 0; i < 3; i++)
            cin >> A[i];
        for (int i = 0; i < 3; i++)
            cin >> B[i];
        Solution ob;
        int ans = ob.find(A, B);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends