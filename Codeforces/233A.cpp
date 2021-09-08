#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << -1;
    }
    else
    {

        if (n % 2 == 0)
        {
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            for (int i = 0; i < n; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }
    }
}