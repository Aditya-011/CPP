#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length() + b.length();
        //  cout << n << endl;

        int ac = 0, bc = 0;
        for (int i = 0; i <= n; i++)
        {
            /* code */
            if (i % 2 == 0)
            {
                char tmp = a[ac];
                // cout << tmp << " ";
                cout << tmp;
                ac++;
            }
            else
            {
                char tmp = b[bc];
                //cout << tmp << " ";
                cout << tmp;
                bc++;
            }
        }
        cout << endl;
    }
}