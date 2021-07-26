#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].length() <= 10)
            cout << s[i] << "\n";
        else
        {
            cout << *s[i].begin() << s[i].length() - 2 << *(s[i].end() - 1) << "\n";
        }
    }
}