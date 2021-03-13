#include <bits/stdc++.h>
using namespace std;
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
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int b = a[0], c = -1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (a[i] > b)
            {
                c = a[i];
                break;
            }
        }
        if (c == -1)
            cout << c << endl;
        else
            cout << b << " " << c << endl;
    }
}