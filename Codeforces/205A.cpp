#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0, ans;
    int minE = *min_element(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minE)
        {
            ans = i + 1;
            count++;
        }
    }
    if (count > 1)
    {
        cout << "Still Rozdil";
    }
    else
    {
        cout << ans;
    }
}
