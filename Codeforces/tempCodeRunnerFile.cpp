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
            arr[b] = 1 - arr[b];
        }