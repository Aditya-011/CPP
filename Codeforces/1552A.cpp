#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b, arr;
        cin >> arr;
        b = arr;
        sort(b.begin(), b.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != arr[i])
            {
                count++;
            }
        }
        cout << count << "\n";
    }
}