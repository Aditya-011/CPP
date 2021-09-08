#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, k;
    scanf("%64l %64l", &a, &k);
    cout << 1 << endl;
    if (a % 2 == 0 && k > a / 2)
    {

        long long int n = a - k, a1 = 2, d = 2;
        cout << a1 + (n - 1) * d;
    }
}