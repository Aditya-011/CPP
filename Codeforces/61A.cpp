#include <bits/stdc++.h>
using namespace std;
string sum(char a, char b)
{
    if (a == '0' && b == '0')
        return "0";
    else if (a == '0' && b == '1')
        return "1";
    else if (a == '1' && b == '0')
        return "1";
    else if (a == '1' && b == '1')
        return "0";
}
int main()
{
    string a, b, c;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        c.insert(i, sum(a[i], b[i]));
    }
    cout << c;
}