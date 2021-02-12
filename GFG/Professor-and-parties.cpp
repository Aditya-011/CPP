// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

string PartyType(long long int a[], int n);

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PartyType(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

string PartyType(long long int a[], int n)
{
    // Your code goes here
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    if (n == s.size())
        return "GIRLS";
    else
        return "BOYS";
}