#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
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
        int b[n];
        b[(n - 1) / 2] = a[0];
        int c = ((n - 1) / 2);
        c++;
        int d = ((n - 1) / 2);
        d--;
        int count = 1;
        for (int i = 1; i < n; i++)

        {
            if (i % 2 != 0)
            {
                b[c] = a[i];
                c++;
            }
            else
            {
                b[d] = a[i];
                d--;
            }
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}