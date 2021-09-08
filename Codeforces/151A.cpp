#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int amt = k * l / nl;
    int lime = c * d, salt = p / np;
    int result = min(lime, min(amt, salt)) / n;
    cout << result;
}