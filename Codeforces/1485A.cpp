#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        int i = 1, count = 0;
        while (1)
        {
            while (a != 0)
            {
                a = a / pow(b, i);
                i++;
            }
        }
    }
}