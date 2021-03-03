#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u, v;
        cin >> n >> u >> v;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == arr[1])
            cout << u + v << endl;
        else
            cout << min(u, v) << endl;
    }
}