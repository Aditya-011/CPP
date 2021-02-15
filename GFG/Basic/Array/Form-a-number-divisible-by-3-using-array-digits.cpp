// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        // code here
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            int tmp = getSum(arr[i]);
            count = count + tmp;
        }
        if (count % 3 == 0)
            return true;
        else
            return false;
    }
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
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
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
} // } Driver Code Ends