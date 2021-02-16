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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == 'R' && i % 2 != 0)
            {
                count++;
            }
            if (s[i] == 'B' && i % 2 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}