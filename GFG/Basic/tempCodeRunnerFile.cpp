// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    long long distance(int arr[], int n)
    {
        // code here

        vector<pair<long long, int>> a;
        for (int i = 0; i < n; i++)
            a.push_back(make_pair(arr[i], i));
        sort(a.begin(),a.end());
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum = sum + abs(a[i].first-a[i+1].first);
        }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.distance(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends