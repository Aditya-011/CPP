// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        // code here
        vector<int> sum;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j <= i; j++)
            {
                /* code */
                //cout << i << j << " ";
                sum1 = sum1 + matrix[i][j];
            }
            cout << endl;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            /* code */
            for (int j = n - 1; j >= i; j--)
            {
                /* code */
                //cout << i << j << " ";
                sum2 = sum2 + matrix[i][j];
            }
        }
        sum.push_back(sum2);
        sum.push_back(sum1);
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
        int n;
        cin >> n;
        vector<vector<int>> matrix(n);
        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix, n);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends