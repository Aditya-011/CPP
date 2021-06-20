#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"
const int mod = 1000000007;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int d = 0, k = 0;
    int preD[n] = {0}, preK[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int sub1, sub2;
        if (i == 0)
        {
            sub1 = 0;
            sub2 = 0;
        }
        else
        {
            sub1 = preD[i - 1];
            sub2 = preK[i - 1];
        }
        if (s[i] == 'D')
        {
            preD[i] = 1;
        }
        else
        {
            preK[i] = 1;
        }
        preD[i] += sub1;
        preK[i] += sub2;
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = 1;
    }
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
            d++;
        else
            k++;

        int D, K;
        D = d / __gcd(d, k);
        K = k / __gcd(d, k);
        if (mp.find({D, K}) != mp.end())
            continue;
        mp[{D, K}] = 1;
        int tot = D + K;
        int prev = i;
        int j = i + tot;
        bool f = 0;
        int add = 1;
        while (j < n)
        {
            int D_ = preD[j] - preD[prev];
            int K_ = preK[j] - preK[prev];
            int g = __gcd(D_, K_);
            D_ /= g;
            K_ /= g;

            if (D_ == D and K_ == K)
            {
                prev = j;
                ans[j] += add;
                add += 1;
            }
            j += tot;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // srand(time(0));
    int t;
    cin >> t;
    //   t=1;
    while (t--)
    {
        // cout<<"Case #"<<tt<<": ";
        solve();
        // tt++;
    }
    return 0;
}