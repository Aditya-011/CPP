#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        b[i] = arr[i];
    }

    vector<int> a;
    for (int i = 0; i < n; i++)
    {

        if (i == n - 1)
        {
            a.push_back(abs(arr[i] - arr[0]));
        }
        else
            a.push_back(abs(arr[i] - arr[i + 1]));
    }
    int ans;
    for (int i = 0; i < a.size(); i++)
    {

        {
            if (a[i] == *min_element(a.begin(), a.end()))
            {
                ans = i;
            }
        }
    }
    if (ans == a.size() - 1)
    {
        cout << ans + 1 << " " << 1;
    }
    else
    {
        cout << ans + 1 << " " << ans + 2;
    }
}