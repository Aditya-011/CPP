#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n - 1; i++)
        {
            /* code */
            cin >> arr[i];
        }
        long long sum = n * (n + 1) / 2;

        for (int i = 0; i < n - 1; i++)
        {
            sum = sum - arr[i];
        }
        cout << sum << endl;
    }
}