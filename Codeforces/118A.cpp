#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
            s[i] += 32;
    }
    vector<char> vec;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u'&& s[i] != 'y')
        {
            vec.push_back('.');
            vec.push_back(s[i]);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
}