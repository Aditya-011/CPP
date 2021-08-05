#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % m != 0)
        {
            arr[i] /= m;
            arr[i]++;
        }
        else
        {
            arr[i] /= m;
        }
    }
    int maxel = *max_element(arr, arr + n);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxel)
            index = i + 1;
    }
    cout << index;
}