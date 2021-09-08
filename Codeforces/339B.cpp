#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll arr[k];
    for (ll i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    ll sum = arr[0] - 1;
    for (ll i = 0; i < k - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            sum += (arr[i + 1] - arr[i]);
            //cout << sum << 1 <<" "<<arr[i]<< endl;
        }
        else if (arr[i] == arr[i + 1])
            continue;
        else
        {
            sum += (n - arr[i] + arr[i + 1]);
            //cout << sum << 2 << endl;
        }
    }

    cout << sum;
}