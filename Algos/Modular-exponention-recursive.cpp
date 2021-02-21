#include <bits/stdc++.h>
using namespace std;
long long mod(int x, int n, int m)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
    {
        long long y = mod(x, n / 2, m);
        return (y * y) % m;
    }
    else
    {
        long long y = mod(x, n - 1, m);
        return ((x % m) * y) % m;
    }
}
int main()
{
    int n, x, m;
    cin >> x >> n >> m;
    cout << mod(x, n, m);
}