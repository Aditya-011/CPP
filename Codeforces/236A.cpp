#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        c.insert(s[i]);
    }
    if (c.size() % 2)
    {
        cout << "IGNORE HIM!";
    }
    else
        cout << "CHAT WITH HER!";
}