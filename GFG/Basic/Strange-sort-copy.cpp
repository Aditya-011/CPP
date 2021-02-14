// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void strangeSort(int arr[], int n, int k)
    {
        //code here.
        k--;
        int key = arr[k];
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            vec.push_back(arr[i]);
            /* code */
        }
        vec.erase(vec.begin() + k);
        sort(vec.begin(), vec.end());
        vec.insert(vec.begin() + k, key);
        for (int i = 0; i < n; i++)
            arr[i] = vec[i];
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
        int k;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        ob.strangeSort(arr, n, k);
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends