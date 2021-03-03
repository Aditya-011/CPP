#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll p;
        cin >> p;
        ll main[3];
        for (ll i = 0; i < 3; i++)
        {
            cin >> main[i];
        }
        ll arr[3];
        for (ll i = 0; i < 3; i++)
        {
            if (main[i] >= p)
            {
                arr[i] = main[i] - p;
            }
            else
            {
                ll tmp = p / main[i];
                if (p % main[i] != 0)
                    tmp++;

                //cout << tmp << " ";
                arr[i] = tmp * main[i] - p;
            }
        }

        sort(arr, arr + 3);
        cout << arr[0] << endl;
    }
}