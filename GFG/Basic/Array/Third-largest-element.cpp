// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int thirdLargest(int a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << thirdLargest(a, n) << endl;
    }
} // } Driver Code Ends

int thirdLargest(int a[], int n)
{
    //Your code here
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        s.insert(a[i]);
    }
    int count = 0;
    if (s.size() < 3)
        return -1;
    else if (s.size() == 3)
        return *s.begin();
    else
    {
        for (auto i = s.end(); i != s.begin(); i--)
        {
            /* code */
            if (count == 3)
            {
                return *i;
            }
            count++;
        }
    }
}
