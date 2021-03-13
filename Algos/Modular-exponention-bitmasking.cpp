#include <bits/stdc++.h>
using namespace std;
long long mod(int x, int n, int m)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res * x) % m;
        }
        n = n >> 1;
        x = (x * x) % m;
    }
    return res;
}
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << mod(x, n, m);
}
