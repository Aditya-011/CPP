// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    // Your code here
    vector<string> ans;
    for (int i = 1; i <= N; i++)
    {
        vector<char> tmp;
        string dummy;
        int n = i;
        while (n > 0)
        {
            if (n % 2 == 0)
                tmp.push_back('0');
            else
                tmp.push_back('1');
            n = n / 2;
        }
        for (int i = 0; i < tmp.size(); i++)
        {

            dummy.push_back(tmp[i]);
        }
        //cout<<dummy;
        //cout<<"\n";
        reverse(dummy.begin(), dummy.end());
        ans.push_back(dummy);
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends