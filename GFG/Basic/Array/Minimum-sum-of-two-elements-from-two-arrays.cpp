// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    int minSum(int a[], int b[], int n)
    {

        int minA = a[0], indexA = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < minA)
            {
                minA = a[i];
                indexA = i;
            }
        }

        int minB = b[0], indexB = 0;
        for (int i = 1; i < n; i++)
        {
            if (b[i] < minB)
            {
                minB = b[i];
                indexB = i;
            }
        }

        if (indexA != indexB)
            return (minA + minB);

        int minA2 = INT_MAX, indexA2;
        for (int i = 0; i < n; i++)
        {
            if (i != indexA && a[i] < minA2)
            {
                minA2 = a[i];
                indexA2 = i;
            }
        }

        int minB2 = INT_MAX, indexB2;
        for (int i = 0; i < n; i++)
        {
            if (i != indexB && b[i] < minB2)
            {
                minB2 = b[i];
                indexB2 = i;
            }
        }

        return min(minB + minA2, minA + minB2);
    }
};
// } Driver Code Ends