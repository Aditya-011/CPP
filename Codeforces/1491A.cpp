#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1 - arr[i];
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    priority_queue<int> p;
    for (int i = 0; i < n; i++)
    {
        p.push(arr[i]);
    }
    cout << p.top() << endl;
}