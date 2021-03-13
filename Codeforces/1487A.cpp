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
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        sort(a, a + n);
        int min = a[0], count = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] != min)
                break;
            count++;
        }
        cout << n - count << endl;
    }
}