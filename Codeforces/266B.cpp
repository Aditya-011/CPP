#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string a;
    cin >> a;
    for (int i = 0; i < t; i++)
    {
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == 'G' && a[i - 1] == 'B')
            {
                a[i] = 'B';
                a[i - 1] = 'G';
                ++i;
            }
        }
    }
    cout << a << endl;
}