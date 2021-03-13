#include <bits/stdc++.h>
using namespace std;

int n, k, m, tc, x, y, u, v;
const int ms = 2e5 + 10;

int32_t main()
{
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        if (n==1 || n==2) {
            cout<<n<<"\n";continue;
        }

        cout<<2+(n-2)/2<<"\n";
    }
}
