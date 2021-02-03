// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

vector<int> leaders(int a[], int n)
{
    // code here
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i; j < n; j++)
        {

            if (a[i] < a[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            vec.push_back(a[i]);
        }
    }
    return vec;
}

// { Driver Code Starts.

int main()
{
    long long t;
    cin >> t; //testcases
    while (t--)
    {
        long long n;
        cin >> n; //total size of array

        int a[n];

        //inserting elements in the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //calling leaders() function
        vector<int> v = leaders(a, n);

        //printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}
// } Driver Code Ends