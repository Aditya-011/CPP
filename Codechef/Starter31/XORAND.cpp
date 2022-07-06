#include <bits/stdc++.h>
using namespace std;
#define ll long long
int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return msb;
}
 
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
       ll n, ans = 0, prev = 0, cnt = 0;
        cin >> n;
        vector<ll> num(n);

        for (auto &a : num)
            cin >> a;

        sort(num.begin(),num.end());

        for (auto x : num)
        {
            if ((prev ^ x) < (prev & x))
                cnt++;
            else
                cnt = 0;
            ans += cnt;
            prev = x;
        }
        cout << ans << endl;
    }
}