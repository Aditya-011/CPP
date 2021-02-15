// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here
        for (int i = 0; i < n / k; i++)
        {
            /* code */
            int a = (i * k) + (k - 1);
            for (int j = i * k; i < a; j++)
            {
                swap(arr[j], arr[a]);
                if (j >= a)
                    break;
                cout << j << " " << a << endl;
                a--;
            }
        }
        if (n % k != 0)
        {
            // cout << "its";
            int b = n % k, c = n / k;
            int j = k * c + b - 1;
            // cout << j << " " << k * c << endl;
            for (int i = (n * c); i <= j; i++)
            {
                //  cout << "its";
                swap(arr[i], arr[j]);
                cout << i << " " << j << endl;
                if (i >= j)
                    break;
                j--;
            }
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
        vector<long long> arr;
        int k;
        cin >> k;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends