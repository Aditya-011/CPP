// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int getCompundInterest(int P, int T, int N, int R)
    {
        // code here
        int a = N * T;
        double b = (R * 0.01) / N;
        double c = pow((1 + b), a);
        //cout << a << " " << b << " " << c << " ";
        return P * c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int P, T, N, R;

        cin >> P >> T >> N >> R;

        Solution ob;
        cout << ob.getCompundInterest(P, T, N, R) << endl;
    }
    return 0;
} // } Driver Code Ends