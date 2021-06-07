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
void solve()
{
    string q;
    set<char> q1;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        char tmp;

        cin >> tmp;
        q.push_back(tmp);
        q1.insert(tmp);
    }
    if (q1.size() < 26)
    {
        string res = "a";
        for (int i = 0; i < 26; i++)
        {
            size_t found = q.find(res);
            if (found == string::npos)
            {
                cout << res << "\n";
                return;
            }
            else
            {
                res[0]++;
            }
        }
    }
    else if (n < 626)
    {
        string res = "aa";
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 25; j >= 0; j--)
            {
                size_t found = q.find(res);
                if (found == string::npos)
                {
                    cout << res << "\n";
                    return;
                }
                else
                {
                    res[i]++;
                }
            }
        }
    }

    else
    {
        string res = "aaa";
        for (int i = 2; i >= 0; i--)
        {
            for (int i = 0; i < 26; i++)
            {
                size_t found = q.find(res);
                if (found == string::npos)
                {
                    cout << res << "\n";
                    return;
                }
                else
                {
                    res[i]++;
                }
            }
        }
    }
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
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
