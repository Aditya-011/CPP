#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i += 2)
    {
        v.push_back((int)s[i] - 48);
    }
    sort(v.begin(), v.end());
    if (v.size() == 1)
        cout << v[0];
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i != v.size() - 1)
            {
                cout << '+';
            }
        }
    }
}