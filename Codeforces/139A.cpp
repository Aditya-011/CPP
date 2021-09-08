#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (n > 0)
    {
        n -= arr[i % 7];
        i++;
    }
    int ans = i % 7;
    if (i % 7 == 0)
    {
        ans = 7;
    }
    cout << ans;
}