#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int n = a + 1;
    while (n)
    {
        if (isPrime(n))
        {
            if (n == b)
            {
                cout << "YES";
                return 0;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        n++;
    }
}