#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    char mp[110][110];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mp[j][i];
            if (mp[j][i] == '.')
            {
                if ((j + i) % 2 == 0)
                    mp[j][i] = 'B';
                else
                    mp[j][i] = 'W';
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << mp[j][i];
        cout << endl;
    }
}