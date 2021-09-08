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
void solve(vector<int> arr)
{
    int n;
    cin >> n;
    cout << arr[n - 1] << "\n";
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
    vector<int> arr;
    int i = 1, count = 0;
    while (count <= 1000)
    {

        if (i % 3 != 0 && i % 10 != 3)
        {
            arr.push_back(i);
            count++;
        }
        i++;
    }

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve(arr);
    }
    return 0;
}
