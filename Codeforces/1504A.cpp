#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9 + 7;
ll mod(ll x)
{
    return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a) * mod(b)));
}
bool checker(string s)
{
    string q = s;
    reverse(s.begin(), s.end());
    if (!s.compare(q))
    {
        return 1;
    }
    return 0;
}
void solve()
{
    string s, a1, a2;
    set<char> s1;
    cin >> s;

    ll n = s.length() - 1;
    for (ll i = 0; i < n + 1; i++)
    {
        s1.insert(s[i]);
    }

    //cout << s.insert(0, "a") << endl;
    a1 = s;
    a2 = s;
    if (s[0] == 'a' && s1.size() == 1)
    {
        cout << "NO\n";
        return;
    }
    else if (!checker(a1.insert(0, "a")))
        cout
            << "YES\n"
            << a1 << endl;
    else if (!checker(a2.insert(n, "a")))
        cout
            << "YES\n"
            << a2 << endl;
    else
    {
        ll tmp = n / 2 - 1;
        ll i = 1;
        while (tmp--)
        {
            string buf = s;
            buf.insert(i, "a");
            if (!checker(buf))
            {
                cout << "YES\n"
                     << buf << "\n";
            }
            i++;
            //cout << " " << i;
        }

        cout << "NO\n";
    }

    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
