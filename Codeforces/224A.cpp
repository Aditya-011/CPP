#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s1, s2, s3;
    s1 = sqrt((a * c) / b);
    s2 = sqrt((a * b) / c);
    s3 = sqrt((b * c) / a);
    cout << (4 * s1 + 4 * s2 + 4 * s3);
}