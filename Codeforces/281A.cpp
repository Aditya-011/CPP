#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] < 96)
        cout << s;
    else
    {
        s[0] -= 32;
        cout << s;
    }
}