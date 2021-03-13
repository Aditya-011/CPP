#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;

        string s;
        cin >> s;
        n = s.length();
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            /* code */
            if (s[i] <= 90)
                count++;
        }
        cout << count << endl;
    }
}