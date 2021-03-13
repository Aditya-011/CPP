// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        cout << isIsogram(s) << endl;
    }
    return 0;
} // } Driver Code Ends

//Complete this function
bool isIsogram(string s)
{
    //Your code here
    int n = s.length();
    set<char> s1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        s1.insert(s[i]);
    }
    if (s1.size() == s.length())
        return 1;
    else
        return 0;
}