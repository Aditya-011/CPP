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

        int a, b;
        cin >> a >> b;

        if (a == 1)
        {
            b--;
            arr[b] = 1 - arr[b];
        }

        else if (a == 2)
        {
            priority_queue<int> p;
            for (int i = 0; i < n; i++)
            {
                p.push(arr[i]);
            }
            int c = b - 1;
            for (int i = 0; i < c; i++)
            {
                p.pop();
            }
            cout << p.top() << endl;
        }
    }
}